#include "main.h"

void print_triangle(int size)
{
	int i;
	int j;

	for(i = 1; i <= size; i++)
	{
		for(j = 1; j <= size - i; j++)
		{
			_putchar(' ');
		}

		for(j = 0; j < i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
