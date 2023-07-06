#include "main.h"


int is_prime(int n, int i)
{
	if(n % i == 0 && i != n)
	{
		return 0;
	}
	if(n %i != 0 && i < n)
	{
		return is_prime(n, i + 1);
	}
	return 1;
}

int is_prime_number(int n)
{
	if (n < 2)
	{
		return 0;
	}
	return is_prime(n, 2);
}
