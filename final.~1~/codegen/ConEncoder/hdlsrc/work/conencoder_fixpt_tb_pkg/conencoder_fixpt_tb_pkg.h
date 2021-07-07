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

#ifndef H_Xlib_conencoder_fixpt_tb_pkg_H
#define H_Xlib_conencoder_fixpt_tb_pkg_H

#ifdef __MINGW32__
#include "xsimMinGW.h"
#else
#include "xsim.h"
#endif


#include "work/conencoder_fixpt_pkg/conencoder_fixpt_pkg.h"
#include "std/textio/textio.h"
#include "ieee/std_logic_textio/std_logic_textio.h"
#include "ieee/numeric_std/numeric_std.h"
#include "ieee/std_logic_1164/std_logic_1164.h"

class Xlib_conencoder_fixpt_tb_pkg: public HSim__s6 {
public:
/* subprogram name to_hex */
char *Gm(HSimConstraints *reConstr, const char Eh);
/* subprogram name to_hex */
char *Gu(HSimConstraints *reConstr, const char *Er, const HSimConstraints *constrEr);
/* subprogram name to_hex */
char *GB(HSimConstraints *reConstr, const char *Ey, const HSimConstraints *constrEy);
/* subprogram name to_hex */
char *GI(HSimConstraints *reConstr, const char *EF, const HSimConstraints *constrEF);
/* subprogram name to_hex */
char *GQ(HSimConstraints *reConstr, const double EM);

public:

public:
  Xlib_conencoder_fixpt_tb_pkg(const HSimString &name);
  ~Xlib_conencoder_fixpt_tb_pkg();
};

extern Xlib_conencoder_fixpt_tb_pkg *XlibConencoder_fixpt_tb_pkg;

#endif
