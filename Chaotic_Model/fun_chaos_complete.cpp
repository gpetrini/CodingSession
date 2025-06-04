// Script created using tangle and noweb features of org-mode

#include "fun_head_fast.h"

MODELBEGIN


EQUATION("X")
v[0] = VL("X",1);
v[1] = V("m");
v[2] = v[1]*v[0]*(1-v[0]);
RESULT(v[2])

MODELEND


void close_sim(void)
{

}
