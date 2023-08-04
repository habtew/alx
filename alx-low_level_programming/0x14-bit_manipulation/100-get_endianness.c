#include "main.h"


/**
 * get_endiannes - function to get endiannerss
 * Return: 1 if the system is big-ennndian whis
 * is the last byte is 1
 * else 0 if the first byte is 1
 */

int get_endianness(void) {
	int num, res;
	char* endianness;

	endianness = (char*)&num;
	num = 1;
	if (*endianness == 1)
		res = 1;
	else
		res = 0;
	return (res);
}

