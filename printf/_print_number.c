#include "main.h"

void _print_number(int num)
{
	char numberString[20];
	int i;
	int digit;

	i = 0;

	if(num == 0)
	{
		numberString[i++] = '0';
	}
	else
	{
		if(num < 0)
		{
			_putchar('-');
			num = -num;
		}
		while (num != 0)
		{
			digit = num % 10;
			num /= 10;
			numberString[i++] = digit + '0';
		}
	}

	while (i > 0)
	{
		_putchar(numberString[--i]);
	}
}

