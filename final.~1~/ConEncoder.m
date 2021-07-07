function out = ConEncoder(in, size)
    constraintLength = 7;
    out = zeros(1, 20);
%     out = zeros(1, size*2);

    currentState = zeros(1, constraintLength - 1);
%     currentState = zeros(1, 6);
    %     while (index <= size)
    for index = 1:size
        out(1, index * 2 - 1) = bitxor(in(1, index), bitxor(currentState(1, 1), bitxor(currentState(1, 2), bitxor(currentState(1, 3), currentState(1, 6)))));
        out(1, index * 2) = bitxor(in(1, index), bitxor(currentState(1, 2), bitxor(currentState(1, 3), bitxor(currentState(1, 5), currentState(1, 6)))));
        currentState = [in(1, index) currentState(1, 1:5)];
    end

end
