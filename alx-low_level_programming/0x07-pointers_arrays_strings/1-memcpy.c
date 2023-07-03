#include "main.h"


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *new_dest = dest;
	char *new_src = src;

	for(i = 0; i < n ; i++)
	{
		new_dest[i] = new_src[i];
	}

	return dest;
}
