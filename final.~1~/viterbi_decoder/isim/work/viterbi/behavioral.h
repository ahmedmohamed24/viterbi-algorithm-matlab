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

#ifndef H_Work_viterbi_behavioral_H
#define H_Work_viterbi_behavioral_H
#ifdef __MINGW32__
#include "xsimMinGW.h"
#else
#include "xsim.h"
#endif


class Work_viterbi_behavioral: public HSim__s6 {
public:

    HSim__s1 SE[4];

  HSimArrayType Matrix_1base;
  HSimArrayType Matrix_1;
  HSimArrayType Matrix_1sub1;
  HSimArrayType Matrix_2base;
  HSimArrayType Matrix_2;
  HSimArrayType Matrix_2sub1;
  HSimArrayType Matrix_3base;
  HSimArrayType Matrix_3;
  HSimArrayType Matrix_4base;
  HSimArrayType Matrix_4;
  HSimArrayType Matrix_5base;
  HSimArrayType Matrix_5;
  HSimArrayType Matrix_6base;
  HSimArrayType Matrix_6;
    HSim__s1 SA[24];
    Work_viterbi_behavioral(const char * name);
    ~Work_viterbi_behavioral();
    void constructObject();
    void constructPorts();
    void reset();
    void architectureInstantiate(HSimConfigDecl* cfg);
    virtual void vhdlArchImplement();
};



HSim__s6 *createWork_viterbi_behavioral(const char *name);

#endif
