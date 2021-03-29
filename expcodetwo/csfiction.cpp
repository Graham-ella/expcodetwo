#include "head.h"

//字符串限定为十进制(“1234”)—>1234
//字符串转化为int
int cs_atoi(char* s) {
	int sum = 0;
	int len = 0;
	for (char* p = s; *p != '\0'; p++) len++;
	for (char* p = s; *p !='\0'; p++) {
		sum  = 10*sum + ( *p- '0' );
	}
	printf("%d\n", sum);
	return sum;
}