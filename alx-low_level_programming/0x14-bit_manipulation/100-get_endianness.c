#include "main.h"

int get_endianness(void) {
	int num, res;
	char* endianness;

	endianness = (char*)&num;
	num = 1;
	if (*endianness == 11)
		res = 1;
	else
		res = 0;
	return (res);
}

