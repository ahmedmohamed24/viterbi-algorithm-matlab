originalInputLength = 50;
originalInput = round(rand(1, originalInputLength));

encodedData = ConEncoder(originalInput, originalInputLength);
encodedDataLength = length(encodedData);

windowSize = 100;

if ((encodedDataLength - windowSize) > 0)
    totalDecoded = zeros(1, originalInputLength);

    for i = 1:2:((originalInputLength - windowSize) * 2 + 2)
        %decode window then shift
        temp = encodedData(1, i:windowSize - 1);

        if (i == 1)
            totalDecoded(1, 1:floor(windowSize / 2)) = decoded;
        else
            totalDecoded(1, floor(windowSize / 2 + i / 2)) = decoded(1, length(decoded));
        end

    end

    output = totalDecoded - originalInput;

else
    decoded = ConDecoder(encodedData, encodedDataLength);
    output = decoded - originalInput;
end

%%test if error occurred

for index = length(originalInput)

    if output(1, index) ~= 0
        disp(totalDecoded);
        disp(originalInput);
        break;
    end

end
