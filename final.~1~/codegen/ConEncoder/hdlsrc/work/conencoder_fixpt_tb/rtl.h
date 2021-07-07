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

#ifndef H_Xlib_conencoder_fixpt_tb_rtl_H
#define H_Xlib_conencoder_fixpt_tb_rtl_H
#ifdef __MINGW32__
#include "xsimMinGW.h"
#else
#include "xsim.h"
#endif


class Xlib_conencoder_fixpt_tb_rtl: public HSim__s6 {
public:


    HSim__s1 SA[26];
  char t24;
HSimConstraints *c25;
  char *t26;
  char t27;
    Xlib_conencoder_fixpt_tb_rtl(const char * name);
    ~Xlib_conencoder_fixpt_tb_rtl();
    void constructObject();
    void constructPorts();
    void reset();
    void architectureInstantiate(HSimConfigDecl* cfg);
    virtual void vhdlArchImplement();
};



HSim__s6 *createXlib_conencoder_fixpt_tb_rtl(const char *name);

#endif
