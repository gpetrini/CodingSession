#include "fun_head.h" // This is mandatory

MODELBEGIN

// Your code goes here
EQUATION("X")
v[0] = VL("X",1);
v[1] = V("m");
v[2] = v[1]*v[0]*(1-v[0]);
RESULT(v[2])

MODELEND
void close_sim(void) {}
