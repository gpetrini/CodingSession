// Script created using tangle and noweb features of org-mode

#include "fun_head_fast.h"

MODELBEGIN


EQUATION("X") // This is a one line comment
/*
This is a long comment
*/
v[0] = VL("X",1); //past value of X, lagged of 1 period
v[1] = V("m"); //current value of m (variable or parameter)
v[2] = v[0] + v[1]; // v[n] are local variables
RESULT(v[2]) // Specify the output of the function

MODELEND


void close_sim(void)
{

}
