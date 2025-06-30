#include <stdlib.h>
#include "function_pointers.h"

/**
 *array_iterator - it exectutes functions given to it on each element
 *@array: provided array
 *@size: the size of the array
 *@action: provided function
 *Return: Nothing
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	size_t a;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
