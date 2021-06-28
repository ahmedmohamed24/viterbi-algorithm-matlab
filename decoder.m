global LOOKUPTABLE;

global PATH1;
global PATH2;
global PATH3;
global PATH4;

global PATH1Temp;
global PATH2Temp;
global PATH3Temp;
global PATH4Temp;

global Path1Weight;
global Path2Weight;
global Path3Weight;
global Path4Weight;

global Path1WeightTemp;
global Path2WeightTemp;
global Path3WeightTemp;
global Path4WeightTemp;

%currentState, firstNextState, firstOutput, secondNextState, secondOutput,firstInput,secondInput
LOOKUPTABLE = [
            0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 1;
            0, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 1;
            1, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 1;
            1, 1, 1, 0, 0, 1, 1, 1, 1, 0, 0, 1;
            ];
%initialize DS for storing 4 possible pathes and weights
Path1Weight = 0;
Path2Weight = 0;
Path3Weight = 0;
Path4Weight = 0;

PATH1 = java.util.LinkedList;
PATH1List = PATH1.listIterator;
PATH2 = java.util.LinkedList;
PATH2List = PATH2.listIterator;
PATH3 = java.util.LinkedList;
PATH3List = PATH3.listIterator;
PATH4 = java.util.LinkedList;
PATH4List = PATH4.listIterator;

PATH1Temp = java.util.LinkedList;
PATH1ListTemp = PATH1Temp.listIterator;
PATH2Temp = java.util.LinkedList;
PATH2ListTemp = PATH2Temp.listIterator;
PATH3Temp = java.util.LinkedList;
PATH3ListTemp = PATH3Temp.listIterator;
PATH4Temp = java.util.LinkedList;
PATH4ListTemp = PATH4Temp.listIterator;

windowSize = 100;
%accept the input from user and validate it's vector and it's length is
%even
while true
    prompt = 'Enter the encoded (recieved) ARRAY of bits';
    INPUT = input(prompt);
    [row, col] = size(INPUT);

    if ((col > 1) && (row == 1) && (round(col / 2) == (col / 2))) %even vector
        break;
    end

    disp('Error');
    stop();
end

%decide if we should use window or not
inputLength = length(INPUT);

if ((inputLength - windowSize) > 0)

    for i = 1:(inputLength - windowSize)
        %decode window then shift
        temp = INPUT(i:(windowSize + i - 1));
        customDecode(temp);
    end

else
    customDecode(INPUT);
end

%main function
function customDecode(currentWindow)
    global LOOKUPTABLE;
    global PATH1;
    global PATH2;
    global PATH3;
    global PATH4;
    global Path1Weight;
    global Path2Weight;
    global Path3Weight;
    global Path4Weight;
    %add the start point (00) to all pathes
    PATH1.add([0; 0]);
    PATH2.add([0; 0]);
    PATH3.add([0; 0]);
    PATH4.add([0; 0]);
    %divide into cascading 2-bits
    for i = 1:2:(length(currentWindow) - 1)
        currentTwoDigits = currentWindow(i:i + 1);

        if (i == 1)
            %start from 00 and get two states
            getFirstNextTwoStatesFromLookUpTable(currentTwoDigits);
        elseif (i == 3)
            %start from 2 states and get 4 states
            getFourStatesBasedOnTwoStates(currentTwoDigits);
        else
            %start from 4 states and get 4 states
            getFourStatesBasedOnFourStates(currentTwoDigits);
        end

    end

    pathWeights = [Path1Weight, Path2Weight, Path3Weight, Path4Weight];
    index = find(pathWeights == min(pathWeights));
    decodedValues = [];
    OriginalValues = [];

    switch index
        case 1

            disp('Path of States:');

            for i = 0:(PATH1.size() - 1)
                disp(PATH1.get(i));
            end

            % disp('Decoded Values are:');

            for i = 0:(PATH1.size() - 2)
                currentState = (PATH1.get(i))';
                nextState = (PATH1.get(i + 1))';
                row = getRowNumberOftState(currentState);
                %check whether we took the fist next state or the second
                if (LOOKUPTABLE(row, 3) == nextState(1, 1)) && (LOOKUPTABLE(row, 4) == nextState(1, 2))
                    output = [LOOKUPTABLE(row, 5), LOOKUPTABLE(row, 6)];
                    decodedValues(1, end + 1) = output(1, 1);
                    decodedValues(1, end + 1) = output(1, 2);
                    OriginalValues(1, end + 1) = LOOKUPTABLE(row, 11);
                elseif (LOOKUPTABLE(row, 7) == nextState(1, 1)) && (LOOKUPTABLE(row, 8) == nextState(1, 2))
                    output = [LOOKUPTABLE(row, 5), LOOKUPTABLE(row, 6)];
                    decodedValues(1, end + 1) = output(1, 1);
                    decodedValues(1, end + 1) = output(1, 2);
                    OriginalValues(1, end + 1) = LOOKUPTABLE(row, 12);
                else
                    disp('Error');
                    stop();
                end

            end

            % disp(decodedValues);
            disp('Original Input:');
            disp(OriginalValues);
        case 2
            disp('Path of States:');

            for i = 0:(PATH2.size() - 1)
                disp(PATH2.get(i));
            end

            disp('decoded Values are:');

            for i = 0:(PATH2.size() - 2)
                currentState = (PATH2.get(i))';
                nextState = (PATH2.get(i + 1))';
                row = getRowNumberOftState(currentState);
                %check whether we took the fist next state or the second
                if (LOOKUPTABLE(row, 3) == nextState(1, 1)) && (LOOKUPTABLE(row, 4) == nextState(1, 2))
                    output = [LOOKUPTABLE(row, 5), LOOKUPTABLE(row, 6)];
                    decodedValues(1, end + 1) = output(1, 1);
                    decodedValues(1, end + 1) = output(1, 2);
                    OriginalValues(1, end + 1) = LOOKUPTABLE(row, 11);
                elseif (LOOKUPTABLE(row, 7) == nextState(1, 1)) && (LOOKUPTABLE(row, 8) == nextState(1, 2))
                    output = [LOOKUPTABLE(row, 5), LOOKUPTABLE(row, 6)];
                    decodedValues(1, end + 1) = output(1, 1);
                    decodedValues(1, end + 1) = output(1, 2);
                    OriginalValues(1, end + 1) = LOOKUPTABLE(row, 12);
                else
                    disp('Error');
                    stop();
                end

            end

            disp(decodedValues);
            disp('Original Input:');
            disp(OriginalValues);
        case 3
            disp('Path of States:');
            disp('decoded Values are:');

            for i = 0:(PATH3.size() - 1)
                disp(PATH3.get(i));
            end

            for i = 0:(PATH3.size() - 2)
                currentState = (PATH3.get(i))';
                nextState = (PATH3.get(i + 1))';
                row = getRowNumberOftState(currentState);
                %check whether we took the fist next state or the second
                if (LOOKUPTABLE(row, 3) == nextState(1, 1)) && (LOOKUPTABLE(row, 4) == nextState(1, 2))
                    output = [LOOKUPTABLE(row, 5), LOOKUPTABLE(row, 6)];
                    decodedValues(1, end + 1) = output(1, 1);
                    decodedValues(1, end + 1) = output(1, 2);
                    OriginalValues(1, end + 1) = LOOKUPTABLE(row, 11);
                elseif (LOOKUPTABLE(row, 7) == nextState(1, 1)) && (LOOKUPTABLE(row, 8) == nextState(1, 2))
                    output = [LOOKUPTABLE(row, 5), LOOKUPTABLE(row, 6)];
                    decodedValues(1, end + 1) = output(1, 1);
                    decodedValues(1, end + 1) = output(1, 2);
                    OriginalValues(1, end + 1) = LOOKUPTABLE(row, 12);
                else
                    disp('Error');
                    stop();
                end

            end

            disp(decodedValues);
            disp('Original Input:');
            disp(OriginalValues);
        case 4
            disp('Path of States:');

            for i = 0:(PATH4.size() - 1)
                disp(PATH4.get(i));
            end

            disp('decoded Values are:');

            for i = 0:(PATH4.size() - 2)
                currentState = (PATH4.get(i))';
                nextState = (PATH4.get(i + 1))';
                row = getRowNumberOftState(currentState);
                %check whether we took the fist next state or the second
                if (LOOKUPTABLE(row, 3) == nextState(1, 1)) && (LOOKUPTABLE(row, 4) == nextState(1, 2))
                    output = [LOOKUPTABLE(row, 5), LOOKUPTABLE(row, 6)];
                    decodedValues(1, end + 1) = output(1, 1);
                    decodedValues(1, end + 1) = output(1, 2);
                    OriginalValues(1, end + 1) = LOOKUPTABLE(row, 11);
                elseif (LOOKUPTABLE(row, 7) == nextState(1, 1)) && (LOOKUPTABLE(row, 8) == nextState(1, 2))
                    output = [LOOKUPTABLE(row, 5), LOOKUPTABLE(row, 6)];
                    decodedValues(1, end + 1) = output(1, 1);
                    decodedValues(1, end + 1) = output(1, 2);
                    OriginalValues(1, end + 1) = LOOKUPTABLE(row, 12);
                else
                    disp('Error');
                    stop();
                end

            end

            disp(decodedValues);
            disp('Original Input:');
            disp(OriginalValues);
        otherwise
            disp('Error, undefines index');
            stop();
    end

end

function getFirstNextTwoStatesFromLookUpTable(currentTwoDigits)
    global LOOKUPTABLE;
    global PATH1;
    global PATH2;
    global PATH3;
    global PATH4;
    global Path1Weight;
    global Path2Weight;
    global Path3Weight;
    global Path4Weight;
    %row number is hardcoded with 1 as it's always 00 start
    firstNextState = [LOOKUPTABLE(1, 3), LOOKUPTABLE(1, 4)];
    firstOutput = [LOOKUPTABLE(1, 5), LOOKUPTABLE(1, 6)];
    weight1 = xor(currentTwoDigits, firstOutput);
    secondNextState = [LOOKUPTABLE(1, 7), LOOKUPTABLE(1, 8)];
    secondOutput = [LOOKUPTABLE(1, 9), LOOKUPTABLE(1, 10)];
    weight2 = xor(currentTwoDigits, secondOutput);
    %set PATH1 data
    Path1Weight = calculateWeight(weight1);
    PATH1.add(firstNextState);
    %set PATH2 data
    Path2Weight = calculateWeight(weight2);
    PATH2.add(secondNextState);
    % path3,4 are similar to 1,2
    PATH3 = PATH1.clone();
    Path3Weight = Path1Weight;
    PATH4 = PATH2.clone();
    Path4Weight = Path2Weight;
end

%on second iteration
function getFourStatesBasedOnTwoStates(currentTwoDigits)
    global LOOKUPTABLE;
    global PATH1;
    global PATH2;
    global PATH3;
    global PATH4;

    global Path1Weight;
    global Path2Weight;
    global Path3Weight;
    global Path4Weight;
    %get row numbers of the current two states to fetch data from lookup
    %table based on them
    temp1 = PATH1.peekLast();
    temp2 = PATH2.peekLast();
    row1 = getRowNumberOftState(temp1');
    row2 = getRowNumberOftState(temp2');
    %row1 data
    row1NextState1 = [LOOKUPTABLE(row1, 3), LOOKUPTABLE(row1, 4)];
    row1Output1 = [LOOKUPTABLE(row1, 5), LOOKUPTABLE(row1, 6)];
    row1Weight1 = xor(currentTwoDigits, row1Output1);
    row1NextState2 = [LOOKUPTABLE(row1, 7), LOOKUPTABLE(row1, 8)];
    row1Output2 = [LOOKUPTABLE(row1, 9), LOOKUPTABLE(row1, 10)];
    row1Weight2 = xor(currentTwoDigits, row1Output2);
    %row2 data
    row2NextState1 = [LOOKUPTABLE(row2, 3), LOOKUPTABLE(row2, 4)];
    row2Output1 = [LOOKUPTABLE(row2, 5), LOOKUPTABLE(row2, 6)];
    row2Weight1 = xor(currentTwoDigits, row2Output1);
    row2NextState2 = [LOOKUPTABLE(row2, 7), LOOKUPTABLE(row2, 8)];
    row2Output2 = [LOOKUPTABLE(row2, 9), LOOKUPTABLE(row2, 10)];
    row2Weight2 = xor(currentTwoDigits, row2Output2);
    %check if there is any 2 next states goes to the same point
    tempNumberOfNextStates = 4;

    if isequal(row1NextState1, row2NextState1) || isequal(row1NextState1, row2NextState2)
        tempNumberOfNextStates = 3; %4-1
    end

    if isequal(row1NextState2, row2NextState1) || isequal(row1NextState2, row2NextState2)
        tempNumberOfNextStates = tempNumberOfNextStates - 1;
    end

    switch tempNumberOfNextStates
        case 4
            %no overlapping between states
            %set PATH1
            Path1Weight = Path1Weight + calculateWeight(row1Weight1);
            PATH1.add(row1NextState1);
            %set PATH3
            PATH3.add(row1NextState2);
            Path3Weight = Path3Weight + calculateWeight(row1Weight2);
            %set PATH2
            Path2Weight = Path2Weight + calculateWeight(row2Weight1);
            PATH2.add(row2NextState1);
            %set PATH4
            Path4Weight = Path4Weight + calculateWeight(row2Weight2);
            PATH4.add(row2NextState2);
        case 3
            %only one overlap
            disp('You just hit state 3 with one overlapping');

            if isequal(row1NextState1, row2NextState1)

                if row1Weight1 <= row2Weight1
                    %set PATH1
                    Path1Weight = Path1Weight + calculateWeight(row1Weight1);
                    PATH1.add(row1NextState1);
                    %set PATH3
                    Path3Weight = calculateWeight(row1Weight2);
                    PATH3.add(PATH1.getFirst());
                    PATH3.add(row1NextState2);
                    %set PATH4
                    Path4Weight = calculateWeight(row2Weight2);
                    PATH4.add(PATH2.getFirst());
                    PATH4.add(row2NextState2);
                    %set PATH2
                    PATH2.clear();
                    PATH2 = PATH1.clone();
                    Path2Weight = Path1Weight;
                else
                    %set PATH2
                    Path2Weight = Path2Weight + calculateWeight(row2Weight1);
                    PATH2.add(row2NextState1);
                    %set PATH3
                    Path3Weight = calculateWeight(row1Weight2);
                    PATH3.add(PATH1.getFirst());
                    PATH3.add(row1NextState2);
                    %set PATH4
                    Path4Weight = calculateWeight(row2Weight2);
                    PATH4.add(PATH2.getFirst());
                    PATH4.add(row2NextState2);
                    %set PATH1
                    PATH1.clear();
                    PATH1 = PATH2.clone();
                    Path1Weight = Path2Weight;

                end

            elseif (isequal(row1NextState1, row2NextState2))

                if row1Weight1 <= row2Weight2
                    %set PATH1
                    Path1Weight = Path1Weight + calculateWeight(row1Weight1);
                    PATH1.add(row1NextState1);
                    %set PATH3
                    Path3Weight = calculateWeight(row1Weight2);
                    PATH3.add(PATH1.getFirst());
                    PATH3.add(row1NextState2);
                    %set PATH2
                    Path2Weight = Path2Weight + calculateWeight(row2Weight1);
                    PATH2.add(row2NextState1);
                    %set PATH4
                    Path4Weight = Path1Weight;
                    PATH4.clear();
                    PATH4 = PATH1.clone();
                else
                    %set PATH2
                    Path2Weight = Path2Weight + calculateWeight(row2Weight1);
                    PATH2.add(row2NextState1);
                    %set PATH3
                    Path3Weight = calculateWeight(row1Weight2);
                    PATH3.add(PATH1.getFirst());
                    PATH3.add(row1NextState2);
                    %set PATH4
                    Path4Weight = calculateWeight(row2Weight2);
                    PATH4.add(PATH2.getFirst());
                    PATH4.add(row2NextState2);
                    %set PATH1
                    Path1Weight = Path4Weight;
                    PATH1.clear();
                    PATH1 = PATH4.clone();
                end

            end

            if isequal(row1NextState2, row2NextState1) %PATH3,PATH2

                if row1Weight2 <= row2Weight1
                    %set PATH1
                    Path1Weight = Path1Weight + calculateWeight(row1Weight1);
                    PATH1.add(row1NextState1);
                    %set PATH3
                    Path3Weight = calculateWeight(row1Weight2);
                    PATH3.add(PATH1.getFirst());
                    PATH3.add(row1NextState2);
                    %set PATH4
                    Path4Weight = calculateWeight(row2Weight2);
                    PATH4.add(PATH2.getFirst());
                    PATH4.add(row2NextState2);
                    %set PATH2
                    Path2Weight = Path3Weight;
                    PATH2.clear();
                    PATH2 = PATH3.clone();
                else
                    %set PATH1
                    Path1Weight = Path1Weight + calculateWeight(row1Weight1);
                    PATH1.add(row1NextState1);
                    %set PATH2
                    Path2Weight = Path2Weight + calculateWeight(row2Weight1);
                    PATH2.add(row2NextState1);
                    %set PATH4
                    Path4Weight = calculateWeight(row2Weight2);
                    PATH4.add(PATH2.getFirst());
                    PATH4.add(row2NextState2);
                    %set PATH3
                    Path3Weight = Path2Weight;
                    PATH3.clear();
                    PATH3 = PATH2.clone();
                end

            elseif isequal(row1NextState2, row2NextState2) %PATH3,PATH4

                if row1Weight2 <= row2Weight2
                    %set PATH1
                    Path1Weight = Path1Weight + calculateWeight(row1Weight1);
                    PATH1.add(row1NextState1);
                    %set PATH3
                    Path3Weight = calculateWeight(row1Weight2);
                    PATH3.add(PATH1.getFirst());
                    PATH3.add(row1NextState2);
                    %set PATH2
                    Path2Weight = Path2Weight + calculateWeight(row2Weight1);
                    PATH2.add(row2NextState1);
                    %set PATH4
                    Path4Weight = Path3Weight;
                    PATH4.clear();
                    PATH4 = PATH3.clone();
                else
                    %set PATH1
                    Path1Weight = Path1Weight + calculateWeight(row1Weight1);
                    PATH1.add(row1NextState1);
                    %set PATH2
                    Path2Weight = Path2Weight + calculateWeight(row2Weight1);
                    PATH2.add(row2NextState1);
                    %set PATH4
                    Path4Weight = calculateWeight(row2Weight2);
                    PATH4.add(PATH2.getFirst());
                    %set PATH3
                    Path3Weight = Path4Weight;
                    PATH3.clear();
                    PATH3 = PATH4.clone();
                end

            end

        otherwise
            %two overlaps
            disp("Error 2 overlaps in second Iteration, two states has the same next two states");
    end

end

function getFourStatesBasedOnFourStates(currentTwoDigits)
    global LOOKUPTABLE;
    global PATH1;
    global PATH2;
    global PATH3;
    global PATH4;

    global PATH1Temp;
    global PATH2Temp;
    global PATH3Temp;
    global PATH4Temp;

    global Path1Weight;
    global Path2Weight;
    global Path3Weight;
    global Path4Weight;

    global Path1WeightTemp;
    global Path2WeightTemp;
    global Path3WeightTemp;
    global Path4WeightTemp;
    Path1WeightTemp = Path1Weight;
    Path2WeightTemp = Path2Weight;
    Path3WeightTemp = Path3Weight;
    Path4WeightTemp = Path4Weight;

    PATH1Temp = PATH1.clone();
    PATH2Temp = PATH2.clone();
    PATH3Temp = PATH3.clone();
    PATH4Temp = PATH4.clone();

    temp1 = PATH1.peekLast();
    temp2 = PATH2.peekLast();
    temp3 = PATH3.peekLast();
    temp4 = PATH4.peekLast();

    row1 = getRowNumberOftState(temp1');
    row2 = getRowNumberOftState(temp2');
    row3 = getRowNumberOftState(temp3');
    row4 = getRowNumberOftState(temp4');
    %next states
    row1NextState1 = [LOOKUPTABLE(row1, 3), LOOKUPTABLE(row1, 4)];
    row1Output1 = [LOOKUPTABLE(row1, 5), LOOKUPTABLE(row1, 6)];
    row1NextState2 = [LOOKUPTABLE(row1, 7), LOOKUPTABLE(row1, 8)];
    row1Output2 = [LOOKUPTABLE(row1, 9), LOOKUPTABLE(row1, 10)];
    row2NextState1 = [LOOKUPTABLE(row2, 3), LOOKUPTABLE(row2, 4)];
    row2Output1 = [LOOKUPTABLE(row2, 5), LOOKUPTABLE(row2, 6)];
    row2NextState2 = [LOOKUPTABLE(row2, 7), LOOKUPTABLE(row2, 8)];
    row2Output2 = [LOOKUPTABLE(row2, 9), LOOKUPTABLE(row2, 10)];
    row3NextState1 = [LOOKUPTABLE(row3, 3), LOOKUPTABLE(row3, 4)];
    row3Output1 = [LOOKUPTABLE(row3, 5), LOOKUPTABLE(row3, 6)];
    row3NextState2 = [LOOKUPTABLE(row3, 7), LOOKUPTABLE(row3, 8)];
    row3Output2 = [LOOKUPTABLE(row3, 9), LOOKUPTABLE(row3, 10)];
    row4NextState1 = [LOOKUPTABLE(row4, 3), LOOKUPTABLE(row4, 4)];
    row4Output1 = [LOOKUPTABLE(row4, 5), LOOKUPTABLE(row4, 6)];
    row4NextState2 = [LOOKUPTABLE(row4, 7), LOOKUPTABLE(row4, 8)];
    row4Output2 = [LOOKUPTABLE(row4, 9), LOOKUPTABLE(row4, 10)];
    possibleStates = [
                row1NextState1, row1Output1, 1;
                row1NextState2, row1Output2, 1;
                row2NextState1, row2Output1, 2;
                row2NextState2, row2Output2, 2;
                row3NextState1, row3Output1, 3;
                row3NextState2, row3Output2, 3;
                row4NextState1, row4Output1, 4;
                row4NextState2, row4Output2, 4
                ];

    tempx = 1; %iteraion number

    for i = 1:8

        if (tempx > 4)
            break;
        end

        for j = i + 1:8

            if (isequal([possibleStates(i, 1), possibleStates(i, 2)], [possibleStates(j, 1), possibleStates(j, 2)]))
                checkBestPath([possibleStates(i, 1), possibleStates(i, 2), possibleStates(i, 3), possibleStates(i, 4), possibleStates(i, 5)], [possibleStates(j, 1), possibleStates(j, 2), possibleStates(j, 3), possibleStates(j, 4), possibleStates(j, 5)], currentTwoDigits, tempx);
                tempx = tempx + 1;
                break;
            end

        end

    end

end

function checkBestPath(state1, state2, currentTwoDigits, iterationNum)

    global PATH1;
    global PATH2;
    global PATH3;
    global PATH4;

    global Path1Weight;
    global Path2Weight;
    global Path3Weight;
    global Path4Weight;

    global Path1WeightTemp;
    global Path2WeightTemp;
    global Path3WeightTemp;
    global Path4WeightTemp;

    global PATH1Temp;
    global PATH2Temp;
    global PATH3Temp;
    global PATH4Temp;

    weight1 = calculateWeight(xor([state1(3), state1(4)], currentTwoDigits));
    weight2 = calculateWeight(xor([state2(3), state2(4)], currentTwoDigits));
    %iteration number to define which path we will add to
    %stateNum(5) which path we were at
    switch iterationNum
        case 1

            if (weight1 <= weight2)

                switch state1(5) %which path
                    case 1
                        PATH1.add([state1(1), state1(2)]);
                        Path1Weight = Path1Weight + weight1;
                        % disp('11');
                    case 2
                        PATH1.clear();
                        PATH1 = PATH2.clone();
                        PATH1.add([state1(1), state1(2)]);
                        Path1Weight = Path2Weight + weight1;
                        % disp('12');
                    case 3
                        PATH1.clear();
                        PATH1 = PATH3.clone();
                        PATH1.add([state1(1), state1(2)]);
                        Path1Weight = Path3Weight + weight1;
                        % disp('13');
                    case 4
                        PATH1.clear();
                        PATH1 = PATH4.clone();
                        PATH1.add([state1(1), state1(2)]);
                        Path1Weight = Path4Weight + weight1;
                        % disp('14');
                    otherwise
                        disp('error, something went wrong!__PathNumber__')
                end

            else

                switch state2(5) %which path
                    case 1
                        PATH1.add([state2(1), state2(2)]);
                        Path1Weight = Path1Weight + weight2;
                        % disp('112');
                    case 2
                        PATH1.clear();
                        PATH1 = PATH2.clone();
                        PATH1.add([state2(1), state2(2)]);
                        Path1Weight = Path2Weight + weight2;
                        % disp('122');
                    case 3
                        PATH1.clear();
                        PATH1 = PATH3.clone();
                        PATH1.add([state2(1), state2(2)]);
                        Path1Weight = Path3Weight + weight2;
                        % disp('132');
                    case 4
                        PATH1.clear();
                        PATH1 = PATH4.clone();
                        PATH1.add([state2(1), state2(2)]);
                        Path1Weight = Path4Weight + weight2;
                        % disp('142');
                    otherwise
                        disp('error, something went wrong!__PathNumber__')
                end

            end

        case 2

            if (weight1 <= weight2)

                switch state1(5) %which path
                    case 1
                        PATH2.clear();
                        PATH2 = PATH1Temp.clone();
                        PATH2.add([state1(1), state1(2)]);
                        Path2Weight = Path1WeightTemp + weight1;
                        % disp('21');
                    case 2

                        PATH2.add([state1(1), state1(2)]);
                        Path2Weight = Path2WeightTemp + weight1;
                        % disp('22');
                    case 3
                        PATH2.clear();
                        PATH2 = PATH3Temp.clone();
                        PATH2.add([state1(1), state1(2)]);
                        Path2Weight = Path3WeightTemp + weight1;
                        % disp('23');
                    case 4
                        PATH2.clear();
                        PATH2 = PATH4Temp.clone();
                        PATH2.add([state1(1), state1(2)]);
                        Path2Weight = Path4WeightTemp + weight1;
                        % disp('24');
                    otherwise
                        disp('error, something went wrong!__PathNumber__')
                end

            else

                switch state2(5) %which path
                    case 1
                        PATH2.clear();
                        PATH2 = PATH1Temp.clone();
                        PATH2.add([state2(1), state2(2)]);
                        Path2Weight = Path1WeightTemp + weight2;
                        % disp('212');
                    case 2
                        PATH2.add([state2(1), state2(2)]);
                        Path2Weight = Path2WeightTemp + weight2;
                        % disp('222');
                    case 3
                        PATH2.clear();
                        PATH2 = PATH3Temp.clone();
                        PATH2.add([state2(1), state2(2)]);
                        Path2Weight = Path3WeightTemp + weight2;
                        % disp('232');
                    case 4
                        PATH2.clear();
                        PATH2 = PATH4Temp.clone();
                        PATH2.add([state2(1), state2(2)]);
                        Path2Weight = Path4WeightTemp + weight2;
                        % disp('242');
                    otherwise
                        disp('error, something went wrong!__PathNumber__')
                end

            end

        case 3
            % disp('test');
            % disp(state1); disp(state2); disp(currentTwoDigits); disp(iterationNum);
            % stop;

            if (weight1 <= weight2)

                switch state1(5) %which path
                    case 1
                        PATH3.clear();
                        PATH3 = PATH1Temp.clone();
                        PATH3.add([state1(1), state1(2)]);
                        Path3Weight = Path1WeightTemp + weight1;
                        % disp('31');
                    case 2
                        PATH3.clear();
                        PATH3 = PATH2Temp.clone();
                        PATH3.add([state1(1), state1(2)]);
                        Path3Weight = Path2WeightTemp + weight1;
                        % disp('32');
                    case 3
                        PATH3.add([state1(1), state1(2)]);
                        Path3Weight = Path3WeightTemp + weight1;
                        % disp('33');
                    case 4
                        PATH3.clear();
                        PATH3 = PATH4Temp.clone();
                        PATH3.add([state1(1), state1(2)]);
                        Path3Weight = Path4WeightTemp + weight1;
                        % disp('34');
                    otherwise
                        disp('error, something went wrong!__PathNumber__')
                end

            else

                switch state2(5) %which path
                    case 1
                        PATH3.clear();
                        PATH3 = PATH1Temp.clone();
                        PATH3.add([state2(1), state2(2)]);
                        Path3Weight = Path1WeightTemp + weight2;
                        % disp('312');
                    case 2
                        PATH3.clear();
                        PATH3 = PATH2Temp.clone();
                        PATH3.add([state2(1), state2(2)]);
                        Path3Weight = Path2WeightTemp + weight2;
                        % disp('322');
                    case 3
                        PATH3.add([state2(1), state2(2)]);
                        Path3Weight = Path3WeightTemp + weight2;
                        % disp('332');
                    case 4
                        PATH3.clear();
                        PATH3 = PATH4Temp.clone();
                        PATH3.add([state2(1), state2(2)]);
                        Path3Weight = Path4WeightTemp + weight2;
                        % disp('342');
                    otherwise
                        disp('error, something went wrong!__PathNumber__')
                end

            end

        case 4

            if (weight1 <= weight2)

                switch state1(5) %which path
                    case 1
                        PATH4.clear();
                        PATH4 = PATH1Temp.clone();
                        PATH4.add([state1(1), state1(2)]);
                        Path4Weight = Path1WeightTemp + weight1;
                        % disp('41');
                    case 2
                        PATH4.clear();
                        PATH4 = PATH2Temp.clone();
                        PATH4.add([state1(1), state1(2)]);
                        Path4Weight = Path2WeightTemp + weight1;
                        % disp('42');
                    case 3
                        PATH4.clear();
                        PATH4 = PATH3Temp.clone();
                        PATH4.add([state1(1), state1(2)]);
                        Path4Weight = Path3WeightTemp + weight1;
                        % disp('43');
                    case 4
                        PATH4.add([state1(1), state1(2)]);
                        Path4Weight = Path4WeightTemp + weight1;
                        % disp('44');
                    otherwise
                        disp('error, something went wrong!__PathNumber__')
                end

            else

                switch state2(5) %which path
                    case 1
                        PATH4.clear();
                        PATH4 = PATH1Temp.clone();
                        PATH4.add([state2(1), state2(2)]);
                        Path4Weight = Path1WeightTemp + weight2;
                        % disp('412');
                    case 2
                        PATH4.clear();
                        PATH4 = PATH2Temp.clone();
                        PATH4.add([state2(1), state2(2)]);
                        Path4Weight = Path2WeightTemp + weight2;
                        % disp('422');
                    case 3
                        PATH4.clear();
                        PATH4 = PATH3Temp.clone();
                        PATH4.add([state2(1), state2(2)]);
                        Path4Weight = Path3WeightTemp + weight2;
                        % disp('432');
                    case 4
                        PATH4.add([state2(1), state2(2)]);
                        Path4Weight = Path4WeightTemp + weight2;
                        % disp('442');

                    otherwise
                        disp('error, something went wrong!__PathNumber__')
                end

            end

        otherwise
            disp('error, something went wrong! __Iteration Number__')
    end

end

%get row number of current state
function rowNumber = getRowNumberOftState(currentState)
    global LOOKUPTABLE;

    for k = 1:4

        if ((LOOKUPTABLE(k, 1) == currentState(1)) && LOOKUPTABLE(k, 2) == currentState(2))
            %this row (k) is data
            rowNumber = k;
            break;
        end

    end

end

function difference = calculateWeight(weightVector)
    difference = 0;

    if (weightVector(1, 1) == 1)
        difference = 1;
    end

    if (weightVector(1, 2) == 1)
        difference = difference + 1;
    end

end
