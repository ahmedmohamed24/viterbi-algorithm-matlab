originalInputLength = 52;
originalInput = round(rand(1, originalInputLength));

encodedData = ConEncoder(originalInput, originalInputLength);
encodedDataLength = length(encodedData);

windowSize = 100;
%add random noise
numOfNoiseAdded = 2;

for k = 0:numOfNoiseAdded
    randomItem = round(rand(1, 1) * originalInputLength) + 1;
    encodedData(1, randomItem) = xor(1, encodedData(1, randomItem));
end

%choose if we should use windowing or not
if ((encodedDataLength - windowSize) > 0)
    totalDecoded = zeros(1, originalInputLength);

    for i = 1:2:(encodedDataLength - windowSize) + 1
        %decode window then shift
        if (i == 1)
            temp = encodedData(1, i:windowSize);
            decodedData = ConDecoder(temp, windowSize);
            totalDecoded(1, 1:floor(windowSize / 2)) = decodedData;
        else
            temp = encodedData(1, i:(windowSize + i - 1));
            decodedData = ConDecoder(temp, windowSize);
            totalDecoded(1, floor(windowSize / 2 + i / 2)) = decodedData(1, length(decodedData));
        end

    end

    output = totalDecoded - originalInput;

else
    decoded = ConDecoder(encodedData, encodedDataLength);
    output = decoded - originalInput;
end

%%test if error occurred
    sumOfErrors=0;

for index = 1:originalInputLength
    if output(1, index) ~= 0
         sumOfErrors=sumOfErrors+1;
    end

end
disp("total num of errors Detected: ");
disp(sumOfErrors);
