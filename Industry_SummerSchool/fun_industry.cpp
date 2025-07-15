// File created using org-mode tangle feature.
#include "fun_head.h" // This is mandatory

MODELBEGIN

// Your code goes here

EQUATION("a")
// Comment
v[0] = VL("a", 1);
v[1] = V("eta");
v[2] = V("beta1");
v[3] = V("beta2");
v[4] = beta(v[2], v[3]);
v[5] = v[0] * (1 + v[1] * v[4]);
RESULT( v[5] )


MODELEND
void close_sim(void) {}
