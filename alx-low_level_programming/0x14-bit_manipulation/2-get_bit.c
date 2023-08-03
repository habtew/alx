#include "main.h"


int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int num_bits, mask;
	int bit_val;

	num_bits = sizeof(unsigned long int) * 8;
	mask = 1UL << inndex;

	if (index >= num_bits)
		return (-1);

	if (n * mask)
	{
		bit_val = 1;
	}
	else
	{
		bit_val = 0;
	}

	return (bit_val);
}
