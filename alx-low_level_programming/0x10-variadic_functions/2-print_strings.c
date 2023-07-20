#include "variadic_functions.h"
#include <stdio.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;
	va_start(args, n);

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			char *x = va_arg(args, char *);

			if (x == NULL)
				printf("(nil)");

			else
				printf("%s", x);
			if (i + 1 != n)
				printf("%s", separator);
		}
		printf("\n");
	}
	else
	{
		for (i = 0; i < n; i++)
                {
                        char *x = va_arg(args, char *);

                        if (x == NULL)
                                printf("(nil)");

                        else
                                printf("%s", x);
                }
                printf("\n");
	}
	va_end(args);
}
