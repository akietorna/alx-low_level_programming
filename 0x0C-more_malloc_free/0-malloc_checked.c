#include <stdlib.h>
#include "main.h"

/**
 *malloc_checked - allocate dynamic memory
 *@b: the size of memory to allocate
 *Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
