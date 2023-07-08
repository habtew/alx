#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point to print number of changes
 * @argC: length of arguments
 * @argV: argv is collection of arguments
 * Return: 0 if success
 * 1 if fails
 */

int main(int argC, char  *argV[])
{
	int i;
	int money;
	int result;

	int coins[5] = {25, 10, 5, 2, 1};

	if (argC != 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argV[1]);
	result = 0;

	if (money < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && money >= 0; i++)
	{
		while (money >= coins[i])
		{
			result++;
			money -= coins[i];
		}
	}

	printf("%d\n", result);
	return (0);
}
