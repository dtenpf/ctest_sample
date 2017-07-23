#include <stdio.h>
#include "simple_calc.h"
#include "simple_math.h"

#define LOG_E(msg,...) fprintf(stderr,"%s:%d:[E] " msg "\n", __FILE__,__LINE__,##__VA_ARGS__)
#define LOG_W(msg,...) fprintf(stderr,"%s:%d:[W] " msg "\n", __FILE__,__LINE__,##__VA_ARGS__)
#if LOG_LEVEL >= 1
#define LOG_D(msg,...) fprintf(stderr,"%s:%d:[D] " msg "\n", __FILE__,__LINE__,##__VA_ARGS__)
#else
#define LOG_D(msg,...) 
#endif
#if LOG_LEVEL >= 2
#define LOG_V(msg,...) fprintf(stderr,"%s:%d:[V] " msg "\n", __FILE__,__LINE__,##__VA_ARGS__)
#else
#define LOG_V(msg,...) 
#endif
#define LOG_I(msg,...) fprintf(stdout, msg "\n",##__VA_ARGS__)

#define TRUE 1
#define FALSE 0

int main(int argc, char *argv[]) 
{
	int out, testcase, result;

	if( argc != 2) {
		LOG_E("usage:TestExe <test_num>\n");
		return -1;
	}

	result = TRUE;
	testcase = atoi(argv[1]);

	switch(testcase) {
		case 1:
			LOG_V("TESTCASE %02d : scal_add()", testcase);
			out = scal_add(1, 2);
			if(out != 3) {
				LOG_E("Error");
				return -1;
			}
			out = scal_add(5, 5);
			if(out != 10) {
				LOG_E("Error");
				return -1;
			}
			if(result) {
				LOG_I("TestPassed");
			}
			break;
		case 2:
			LOG_V("TESTCASE %02d : scal_sub()", testcase);
			out = scal_sub(5, 6);
			if(out != -1) {
				return -1;
			};
			break;
		case 3:
			LOG_V("TESTCASE %02d : scal_mul()", testcase);
			out = scal_mul(3, 3);
			if(out == 9) {
				LOG_I("this invert the pass/fail flag of the test.");
				return -1;
			}
		case 4:
			LOG_V("TESTCASE %02d : scal_dev()", testcase);
			out = scal_dev(10, 3);
			if(out != 3) {
				LOG_E("Error");
			}
			out = scal_dev(4, 2);
			if(out != 2) {
				LOG_E("Error");
			}
			break;
		case 5:
			LOG_V("TESTCASE %02d : smath_pow()", testcase);
			out = smath_pow(10, 3);
			if(out != 1000) {
				LOG_E("out=%d", out);
				LOG_E("Error");
			}
			break;
		default:
			return -1;
	}

	return 0;
}
