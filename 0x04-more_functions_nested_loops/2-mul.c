#include "main.h"

/**
 * mul - multiplies two integers
 * @a: operand 1
 * @b: opreand 2
 * Return: result
 */

int mul(int a, int b)
{
	int result = 0;

	if (b > 0)
	{
		while (b > 0)
		{
			result += a;
			b--;
		}
		return (result);
	}
	else if (a > 0)
	{
		while (a > 0)
		{
			result += b;
			a--;
		}
		return (result);
	}
	else
	{
		while (a < 0)
		{
			result += b;
			a++;
		}
		return (result);
	}
}
