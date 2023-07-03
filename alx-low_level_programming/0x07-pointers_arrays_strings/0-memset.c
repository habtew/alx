#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
	unsigned int i;


	for(i = 0; i < n; i++)
	{
		p[i] = b;
	}
	return s;
}
