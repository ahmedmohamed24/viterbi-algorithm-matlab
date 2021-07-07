@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2018a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2018a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=ConEncoder_wrapper_fixpt_hdl_mex
set MEX_NAME=ConEncoder_wrapper_fixpt_hdl_mex
set MEX_EXT=.mexw64
call "C:\PROGRA~1\MATLAB\R2018a\sys\lcc64\lcc64\mex\lcc64opts.bat"
echo # Make settings for ConEncoder_wrapper_fixpt_hdl_mex > ConEncoder_wrapper_fixpt_hdl_mex_mex.mki
echo COMPILER=%COMPILER%>> ConEncoder_wrapper_fixpt_hdl_mex_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> ConEncoder_wrapper_fixpt_hdl_mex_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> ConEncoder_wrapper_fixpt_hdl_mex_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> ConEncoder_wrapper_fixpt_hdl_mex_mex.mki
echo LINKER=%LINKER%>> ConEncoder_wrapper_fixpt_hdl_mex_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> ConEncoder_wrapper_fixpt_hdl_mex_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> ConEncoder_wrapper_fixpt_hdl_mex_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> ConEncoder_wrapper_fixpt_hdl_mex_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> ConEncoder_wrapper_fixpt_hdl_mex_mex.mki
echo OMPFLAGS= >> ConEncoder_wrapper_fixpt_hdl_mex_mex.mki
echo OMPLINKFLAGS= >> ConEncoder_wrapper_fixpt_hdl_mex_mex.mki
echo EMC_COMPILER=lcc64>> ConEncoder_wrapper_fixpt_hdl_mex_mex.mki
echo EMC_CONFIG=optim>> ConEncoder_wrapper_fixpt_hdl_mex_mex.mki
"C:\Program Files\MATLAB\R2018a\bin\win64\gmake" -j 1 -B -f ConEncoder_wrapper_fixpt_hdl_mex_mex.mk
