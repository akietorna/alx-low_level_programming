#include "main.h"

int check_prime(int n, int num);

/**
 *is_prime_number - check for prime number
 *@n: input number
 *Return: 1 or 0
 */

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 *check_prime - validates prime numbers
 *@n: imput number
 *@num: divisor
 *Return: 0 or 1
 */

int check_prime(int n, int num)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n != num && n % num == 0)
	{
		return (0);
	}
	else if (n == num)
	{
		return (1);
	}
	else
	{
		return (check_prime(n, num + 1));
	}
}
