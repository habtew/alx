#include "main.h"

void print_number(int n)
{
        int i;
        int d;
        int c;
        unsigned int x = n;
        unsigned int y = n;

        d = 1;
        c = 0;

        if (n == 0)
        {
                _putchar('0');
        }
        if (n < 0)
        {
                _putchar('-');
                n = n + 1;
                n = -n;
                y = n;
                x = n;
                x += 1;
                y += 1;
        }

        while (x != 0)
        {
                x = x / 10;
                c++;
        }
        for (i = 1; i < c; i++)
        {
                d *= 10;
        }
        for (i = 0; i < c; i++)
        {
                _putchar(y / d + '0');
                y = y % d;
                d = d / 10;
        }
}
