#include <stdlib.h>
#include "main.h"

/**
 *create_array - creates an array of characters
 *@size: the size of the array
 *@c: the initialization character
 *Return: pointer to the characther array
 */

char *create_array(unsigned int size, char c)
{
	if  (size == 0)
	{
		return (NULL);
	}
	else
	{
		char *my_array = (char *)malloc(size * sizeof(char));
		unsigned int i = 0;

		if (my_array != NULL)
		{
			while (i < size)
			{
				my_array[i] = c;
				i++;
			}
			return (my_array);
		}
		else
		{
			return (NULL);
		}
	}
}
