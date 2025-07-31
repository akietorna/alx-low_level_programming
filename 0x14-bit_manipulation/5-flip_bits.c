#include "main.h"
#include <stdlib.h>

/**
 *flip_bits - checks the number of bits to flip to get a number from another
 *@n: the first number
 *@m: the other number
 *Return: the number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int b = 0;
	unsigned long int a = n > m ? (sizeof(n) * 8) - 1 : (sizeof(n) * 8) - 1;
	int c;

	for (c = a; c >= 0; c--)
	{
		if (((n >> c) & 1) != ((m >> c) & 1))
		{
			b++;
		}
	}
	return (b);
}
