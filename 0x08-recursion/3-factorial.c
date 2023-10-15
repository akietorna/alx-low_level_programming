#include "main.h"

/**
 *factorial - finds the factorial of a number
 *@n: number whose factorial is to be found
 *Returns: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
