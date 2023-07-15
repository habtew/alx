#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates array in range of given nnumbers
 * inncluding both upper and lower limits
 * @min: lower limit
 * @max: upper limit
 * Return: returns ptr if succes else
 * null is returned
*/

int *array_range(int min, int max)
{
	int i, len;
	int *ptr;

	len = 0;

	if (min > max)
	{
		return (NULL);
	}

	for (i = min; i <= max; i++)
		len++;

	ptr = malloc(sizeof(int) * len);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
