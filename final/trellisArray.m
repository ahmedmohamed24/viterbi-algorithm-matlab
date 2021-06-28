function trellis = trellisArray()
    trellis = zeros(64, 9);
    numberOfStates = 64; %the trellis's rows

    for iterator = 1:numberOfStates
        currentState = de2bi(iterator - 1, 6); %current state of 6 bits
        %save data into trellis matrix
        trellis(iterator, 1) = bi2de([0, currentState(1, 1:5)]); %next satate if input = 0
        trellis(iterator, 2) = bi2de([1, currentState(1, 1:5)]); %next satate if input = 1
        trellis(iterator, 3) = bitxor(0, bitxor(currentState(1, 1), bitxor(currentState(1, 2), bitxor(currentState(1, 3), currentState(1, 6))))); %x if input = 0
        trellis(iterator, 4) = bitxor(0, bitxor(currentState(1, 2), bitxor(currentState(1, 3), bitxor(currentState(1, 5), currentState(1, 6))))); %y if input = 0
        trellis(iterator, 5) = bitxor(1, bitxor(currentState(1, 1), bitxor(currentState(1, 2), bitxor(currentState(1, 3), currentState(1, 6))))); %x if input = 1
        trellis(iterator, 6) = bitxor(1, bitxor(currentState(1, 2), bitxor(currentState(1, 3), bitxor(currentState(1, 5), currentState(1, 6))))); %y if input = 1
        trellis(iterator, 7) = bi2de([currentState(1, 2:6), 0]); %previous state1
        trellis(iterator, 8) = bi2de([currentState(1, 2:6), 1]); %previous state2
        trellis(iterator, 9) = currentState(1, 1); %previous states input
    end

end
