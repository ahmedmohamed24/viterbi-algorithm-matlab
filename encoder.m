constraintLength = 4;
RIGESTERS = zeros(1, constraintLength - 1);
%take input from user and make sure it's in array form
col = 0;
row = 0;

while true
    prompt = 'Enter the input values, please! (Proper Vector)';
    INPUT = input(prompt);
    [row, col] = size(INPUT);

    if ((col > 1) && (row == 1))
        %vector
        break;
    end

    disp('Error');
end

firstOutputVector = zeros(1, col);
secondOutputVector = zeros(1, col);

for i = 1:col
    %shift registers and add the input
    RIGESTERS = shiftArrayRight(RIGESTERS, INPUT(i));
    %based on Generation function
    firstOutputVector(i) = xor(xor(RIGESTERS(1), RIGESTERS(2)), RIGESTERS(3));
    secondOutputVector(i) = xor(RIGESTERS(1), RIGESTERS(2));
end

disp("Encoded signal");
disp([firstOutputVector, secondOutputVector]);
%add noise
% sizeR = [1 (2*col+2)] ;
% num1 = 8 ;
% R = zeros(sizeR);  % set all to zero
% ix = randperm(numel(R)); % randomize the linear indices
% ix = ix(1:num1); % select the first
% R(ix) = 1 ;% set the corresponding positions to 1
% disp("Noise random signal");
% disp(R);
% disp("Recived signal");
% disp(xor(R,[firstOutputVector,secondOutputVector]));
function shiftedArray = shiftArrayRight(unshiftedArray, shiftValue)
    shiftedArray = zeros(1, 3);

    for i = 3:-1:1

        if i == 1
            shiftedArray(i) = shiftValue;
        else
            shiftedArray(i) = unshiftedArray(i - 1);
        end

    end

end
