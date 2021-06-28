function state = calculateBestPath(PM, size)
    smallest = [PM(1, 1), 0];

    for iterator = 2:size

        if (smallest(1, 1) > PM(iterator, 1))
            smallest = [PM(iterator, 1), iterator - 1];
        end

        state = smallest(1, 2);
    end

end
