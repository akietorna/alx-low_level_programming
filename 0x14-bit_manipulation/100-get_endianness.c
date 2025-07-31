#include "main.h"
#include <stdlib.h>

/**
 *get_endianness - get the endianness of a machine
 *Return: 0-big endian 1-little endian
 */

int get_endianness(void)
{
	unsigned int val = 1;
	char *str = (char *)&val;

	return (*str);
}
