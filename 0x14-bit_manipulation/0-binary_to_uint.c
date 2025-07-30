#include "main.h"
#include <stdlib.h>

/**
 *binary_to_int - converts binary to unsigned integer
 *@b: binary number
 *Return: unsigned integer
 */

unsigned int binary_to_uint(const char *b)
{
	int a = 0;
	int c = 0;
	unsigned int res = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[a] != '\0')
	{
		if (b[a] < '0' || b[a] > '1')
		{
			return (0);
		}
		a++;
	}
	a -= 1;
	while (a >= 0)
	{
		int d = 0;
		int e = 1;

		while (d < c)
		{
			e *= 2;
			d++;
		}
		res += (b[a] - '0') * e;
		a--;
		c++;
	}
	return (res);
}
