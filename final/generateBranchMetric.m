function hammingDistances = generateBranchMetric(currentState, x, y, trellis)
    %%constants of trellis
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
        X = 3;
        Y = 4;
    else
        X = 5;
        Y = 6;
    end

    predictedX1 = trellis(hammingDistances(1, 1) + 1, X);
    predictedY1 = trellis(hammingDistances(1, 1) + 1, Y);
    predictedX2 = trellis(hammingDistances(2, 1) + 1, X);
    predictedY2 = trellis(hammingDistances(2, 1) + 1, Y);

    hammingDistances(2, 2) = bitxor(predictedX2, x) + bitxor(predictedY2, y);
end
