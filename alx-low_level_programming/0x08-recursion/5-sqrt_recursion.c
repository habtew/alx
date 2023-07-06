#include "main.h"


int sqrt_helper(int n, int i)
{
	if (i * i > n)
	{
		return -1;
	}

	if (i * i == n)
	{
		return i;
	}

	return sqrt_helper(n, i + 1);
}

int _sqrt_recursion(int n){
	return sqrt_helper(n , 0);
}
