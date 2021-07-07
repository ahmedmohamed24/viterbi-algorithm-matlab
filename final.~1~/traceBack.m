function decodedData = traceBack(initialState, statesRecorder, trellis, timeSteps)
    currentState = initialState;
    iterator = timeSteps;
    decodedData = zeros(1, timeSteps);

    while (iterator > 0)
        previousState = statesRecorder(currentState + 1, iterator);
        decodedData(1, iterator) = transitionValue(currentState, trellis);
        currentState = previousState;
        iterator = iterator - 1;
    end

end
