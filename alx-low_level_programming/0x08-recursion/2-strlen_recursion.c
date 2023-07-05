#include "main.h"

int _strlen_recursion(char *s)
{
	int count;
	count = 0;
	if (*s == '\0')
	{
		return count;
	}
	count = 1;
	return count + _strlen_recursion(s + 1);
}

