#include <stdio.h>
#include "simple_calc.h"

int main(int argc, char *argv[]) 
{
	int out, ret;

	if( argc != 2) {
		printf("usage:TestExe <test_num>\n");
		return -1;
	}

	ret = 0;

	switch(atoi(argv[1])) {
		case 1:
			out = scal_add(1, 2);
			if(out == 3) ret = 1;
			break;
		case 2:
			out = scal_sub(5, 6);
			if(out == -1) ret = 1;
			break;
		case 3:
			out = scal_mul(3, 3);
			if(out == 9) ret = 1;
		case 4:
			out = scal_mul(10, 3);
			if(out == 3) ret = 1;
			break;
		default:
			return -1;
	}

	if(ret) {
		printf("True\n");
	}
	else {
		printf("False\n");
	};

	return 0;
}
