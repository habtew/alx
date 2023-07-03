#include "main.h"
#include <unistd.h>

/**
 * _putchar - entry point to print character
 * @c: is character to be printed
 * Return: returns 1 if success
 * -1 if fail
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
