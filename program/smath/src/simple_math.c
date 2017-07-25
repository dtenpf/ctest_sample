#include "simple_calc.h"

int smath_pow(int a, int b) 
{
	int out;
	
	for(out = a;b > 1; b--) {
		out = scal_mul(out , a);
	}
	return out;
}


