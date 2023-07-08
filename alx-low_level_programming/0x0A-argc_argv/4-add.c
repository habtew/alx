#include <stdio.h>
#include <stdlib.h>

int main(int argC, char *argV[])
{
	int i;

	int sum;

	sum = 0;

	if (argC != 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argC; i++)
	{
		if (atoi(argV[i]) < 0)
		{
			printf("Error\n");
			 return (1);
		}
	}

	for (i = 1; i < argC; i++)
	{
		sum += atoi(argV[i]);
	}

	printf("%d\n", sum);

	return (0);
}
