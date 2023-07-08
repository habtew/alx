#include <stdio.h>


int main(int argC, char *argV[])
{
	int i;

	for(i = 0; i < argC; i++)
	{
		printf("%s\n", argV[i]);
	}

	return (0);
}
