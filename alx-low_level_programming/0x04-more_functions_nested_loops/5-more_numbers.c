#include "main.h"
#include "3-print_numbers.c"

void more_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		print_numbers();
		i++;
	}
	_putchar('\n');
}
