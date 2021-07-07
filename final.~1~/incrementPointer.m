function result = incrementPointer(pointer, maxValue)
pointer = pointer +1;
if(pointer == maxValue + 1)
    pointer = 1;
end
result = pointer;
end