function decodedData = ConDecoderWithFraming(receivedData, frameSize)
%%%@var trellis%
%
%(row number - 1) is the current state vlaue%
%column = 1 is the next state for input = 0%
%column = 2 is the next state for input = 1%
%column = 3 is the output x for input = 0%
%column = 4 is the output y for input = 0%
%column = 5 is the output x for input = 1%
%column = 6 is the output y for input = 1%
%column = 7 is the previous state1%
%column = 8 is the previous state2%
%column = 9 is the previous states input value%
%
%%constants
%
NEXT_STATE_0 = 1;
NEXT_STATE_1 = 2;
X_0 = 3;
Y_0 = 4;
X_1 = 5;
Y_1 = 6;
PREVIOUS_STATE_1 = 7;
PREVIOUS_STATE_2 = 8;
INPUT_OF_PREVIOUS_STATE = 9;
%
%initialization
%
numberOfStates = 64;
timeSteps = int8(frameSize/2);
trellis = trellisArray();
statesRecorder = zeros(numberOfStates, timeSteps + 2);
PM = zeros(numberOfStates, timeSteps + 2);
streamSize = length(receivedData);
decodedData = zeros(1, streamSize/2);
%statesRecorder(:, 1) = 0; %all paths begins with s0
PM(:, 1) = 0;
%
%disp(trellis);
for timeStep = 1:(timeSteps)
    for state = 0: (numberOfStates - 1)
        BM = generateBranchMetric(state, receivedData(timeStep*2 - 1), receivedData(timeStep*2), trellis);
        PM1 = PM(BM(1,1) + 1, timeStep);%BM(1,1) is the previousState1
        PM2 = PM(BM(2,1) + 1, timeStep);%BM(2,1) is the previousState2
        newPM = ACSunit(PM1, PM2, BM(1,2), BM(2,2), BM(1,1), BM(2,1));
        PM(state + 1, timeStep + 1) = newPM(1, 2);
        statesRecorder(state + 1, timeStep) = newPM(1, 1);
    end
end
initialState = calculateBestPath(PM(:,timeSteps + 1), numberOfStates);
decodedData = traceBack(initialState, statesRecorder, trellis, timeSteps);
firstStatePointer = 1;
lastStatePointer = 64;
for timeStep = frameSize/2 + 1:(streamSize/2)
    for state = 0: (numberOfStates - 1)
        BM = generateBranchMetric(state, receivedData(timeStep*2 - 1), receivedData(timeStep*2), trellis);
        PM1 = PM(BM(1,1) + 1, lastStatePointer);%BM(1,1) is the previousState1
        PM2 = PM(BM(2,1) + 1, lastStatePointer);%BM(2,1) is the previousState2
        newPM = ACSunit(PM1, PM2, BM(1,2), BM(2,2), BM(1,1), BM(2,1));
        PM(state + 1, incrementPointer(lastStatePointer, 66)) = newPM(1, 2);
        statesRecorder(state + 1, lastStatePointer) = newPM(1, 1);
    end
    initialState = calculateBestPath(PM(:,incrementPointer(lastStatePointer, 66)), numberOfStates);
    decodedData(1, timeStep) = transitionValue(initialState, trellis);
    firstStatePointer = incrementPointer(firstStatePointer, 66);
    lastStatePointer = incrementPointer(lastStatePointer, 66);
end
end