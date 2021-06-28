function output = transitionValue(currentState, trellis)
    %%constants
    NEXT_STATE_0 = 1;
    NEXT_STATE_1 = 2;
    X_0 = 3;
    Y_0 = 4;
    X_1 = 5;
    Y_1 = 6;
    PREVIOUS_STATE_1 = 7;
    PREVIOUS_STATE_2 = 8;
    INPUT_OF_PREVIOUS_STATE = 9;
    output = trellis(currentState + 1, INPUT_OF_PREVIOUS_STATE);
end
