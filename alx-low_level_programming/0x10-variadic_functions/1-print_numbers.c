#include "variadic_functions.h"
#include <stdio.h>


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;
	va_start(args, n);

	if(separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(args, int));

			if (i != n - 1)
				printf("%s", separator);
		}
	}
	else
	{
		for (i = 0; i < n; i++)
			printf("%d", va_arg(args, int));
	}

	printf("\n");
	va_end(args);
}
