#include <stdio.h>


int main()
{
	int i;

	for(i = 1 ; i<= 100; i++)
	{
		if(i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if(i % 5 == 0)
		{
			printf("Buzz");
		}
		else if(i % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%i", i);
		}
		if(i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
