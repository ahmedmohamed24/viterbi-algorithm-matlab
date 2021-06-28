function hammingDistances = generateBranchMetric(currentState, x, y, trellis)
    %%constants of trellis
    X_0 = 3;
    Y_0 = 4;
    X_1 = 5;
    Y_1 = 6;
    PREVIOUS_STATE_1 = 7;
    PREVIOUS_STATE_2 = 8;
    INPUT_OF_PREVIOUS_STATE = 9;
    %
    %%@var hammingDistances is a 2*2 array the first coloum is the previous state
    %the second column is the hamming distance
    hammingDistances(1, 1) = trellis(currentState + 1, PREVIOUS_STATE_1);
    hammingDistances(2, 1) = trellis(currentState + 1, PREVIOUS_STATE_2);
    previousInput = trellis(currentState + 1, INPUT_OF_PREVIOUS_STATE);

    if (previousInput == 0)
        predictedX1 = trellis(hammingDistances(1, 1) + 1, X_0);
        predictedY1 = trellis(hammingDistances(1, 1) + 1, Y_0);
        predictedX2 = trellis(hammingDistances(2, 1) + 1, X_0);
        predictedY2 = trellis(hammingDistances(2, 1) + 1, Y_0);
    else
        predictedX1 = trellis(hammingDistances(1, 1) + 1, X_1);
        predictedY1 = trellis(hammingDistances(1, 1) + 1, Y_1);
        predictedX2 = trellis(hammingDistances(2, 1) + 1, X_1);
        predictedY2 = trellis(hammingDistances(2, 1) + 1, Y_1);
    end

    hammingDistances(1, 2) = bitxor(predictedX1, x) + bitxor(predictedY1, y);
    hammingDistances(2, 2) = bitxor(predictedX2, x) + bitxor(predictedY2, y);
end
