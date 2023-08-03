#include "main.h"
#include <unistd.h>

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	
	num = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '1' && *b != '0')
			return (0);

		num <<= 1;

		num += (*b - '0');
		b++;
	}

	return (num);
}
