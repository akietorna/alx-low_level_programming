#include <stdlib.h>
#include "main.h"

/**
 *_realloc - reallocate a memory block
 *@ptr: pointer to the old memory block
 *@old_size: the size of the old memory block
 *@new_size: the size of the new memory block
 *Return: pointer to the new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		return ((void *)malloc(new_size));
	}
	else
	{
		unsigned int a;
		char *new_ptr1;
		char *ptr1;
		void *new_ptr = malloc(new_size);
		unsigned int new = old_size > new_size ? new_size : old_size;

		if (new_ptr == NULL)
		{
			return (NULL);
		}
		ptr1 = (char *)ptr;
		new_ptr1 = (char *)new_ptr;
		for (a = 0; a < new; a++)
		{
			new_ptr1[a] = ptr1[a];
		}
		free(ptr);
		return (new_ptr);
	}
}
