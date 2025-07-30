#include "main.h"
#include <stdlib.h>

/**
 *clear_bit - sets a bit at an index of a number to 0
 *@n: the number
 *@index: the index
 *Return: 1-success -1-failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8) - 1)
	{
		return (-1);
	}
	*n = *n & ~(1 << index);
	return (1);
}
