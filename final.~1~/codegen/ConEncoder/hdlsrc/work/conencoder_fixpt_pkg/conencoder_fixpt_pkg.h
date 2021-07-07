////////////////////////////////////////////////////////////////////////////////
//   ____  ____   
//  /   /\/   /  
// /___/  \  /   
// \   \   \/  
//  \   \        Copyright (c) 2003-2004 Xilinx, Inc.
//  /   /        All Right Reserved. 
// /---/   /\     
// \   \  /  \  
//  \___\/\___\
////////////////////////////////////////////////////////////////////////////////

#ifndef H_Xlib_conencoder_fixpt_pkg_H
#define H_Xlib_conencoder_fixpt_pkg_H

#ifdef __MINGW32__
#include "xsimMinGW.h"
#else
#include "xsim.h"
#endif


#include "ieee/numeric_std/numeric_std.h"
#include "ieee/std_logic_1164/std_logic_1164.h"

class Xlib_conencoder_fixpt_pkg: public HSim__s6 {
public:
  HSimArrayType Vector_of_signed32;
  HSimArrayType Vector_of_unsigned6;
  HSimArrayType Vector_of_unsigned7;
  Xlib_conencoder_fixpt_pkg(const HSimString &name);
  ~Xlib_conencoder_fixpt_pkg();
};

extern Xlib_conencoder_fixpt_pkg *XlibConencoder_fixpt_pkg;

#endif
