#include "main.h"
#include <stdio.h>

typedef unsigned long int int;


void print_binary(unsigned long int n)
{
	int num_digits;
	int mask;
	int found_msb;

	num_digits = sizeof(int) * 8;
	msk = 1UL << (num_digits - 1);
	if (n == 0)
	{
		printf("0");
		return;
	}


	while (mask > 0)
	{
		if (n & mask)
		{
			found_msb = 1;
			printf("1");
		}
		else if (found_msb)
		{
			printf("0");
		}
		mask >>= 1;
	}
}
