@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2018a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2018a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=ConEncoder_mex
set MEX_NAME=ConEncoder_mex
set MEX_EXT=.mexw64
call "C:\PROGRA~1\MATLAB\R2018a\sys\lcc64\lcc64\mex\lcc64opts.bat"
echo # Make settings for ConEncoder > ConEncoder_mex.mki
echo COMPILER=%COMPILER%>> ConEncoder_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> ConEncoder_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> ConEncoder_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> ConEncoder_mex.mki
echo LINKER=%LINKER%>> ConEncoder_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> ConEncoder_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> ConEncoder_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> ConEncoder_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> ConEncoder_mex.mki
echo OMPFLAGS= >> ConEncoder_mex.mki
echo OMPLINKFLAGS= >> ConEncoder_mex.mki
echo EMC_COMPILER=lcc64>> ConEncoder_mex.mki
echo EMC_CONFIG=optim>> ConEncoder_mex.mki
"C:\Program Files\MATLAB\R2018a\bin\win64\gmake" -j 1 -B -f ConEncoder_mex.mk
