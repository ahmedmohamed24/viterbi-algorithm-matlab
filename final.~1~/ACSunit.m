%add compare select
function out = ACSunit(PM1, PM2, BM1, BM2, previousState1, previousState2)
    %%out is a 1*2 array; column 1 for the state; column 2 for the pathmetric
    %%of the chosen state
    %
    PM1 = PM1 + BM1;
    PM2 = PM2 + BM2;

    if (PM1 > PM2)
        out(1, 1) = previousState2;
        out(1, 2) = PM2;
    else
        out(1, 1) = previousState1;
        out(1, 2) = PM1;
    end

end
