#include <stdio.h>
#include <stdlib.h>


int main(int argC, char *argV[])
{
	if (argC != 3)
	{
		printf("Error\n");

		return (1);
	}

	printf("%d\n", atoi(argV[1]) * atoi(argV[2]));
	
	return (0);
}
