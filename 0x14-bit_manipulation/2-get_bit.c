#include "main.h"
#include <stdlib.h>

/**
 *get_bit - get the bit at an index of a number
 *@n: the number
 *@index: the index
 *Return: the bit or -1 in case of error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8) - 1)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
