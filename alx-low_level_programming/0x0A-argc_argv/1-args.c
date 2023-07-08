#include <stdio.h>

int main(int argC, char *argV[] __attribute__((unused)))
{
	printf("%d\n", argC - 1);
	return (0);
}
