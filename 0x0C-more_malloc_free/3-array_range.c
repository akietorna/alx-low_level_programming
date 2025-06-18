#include <stdlib.h>
#include "main.h"

/**
 *array_range - create an array of integers
 *@min: the minimum number
 *@max: the maximum number
 *Return: the pointer to the array
 */

int *array_range(int min, int max)
{
	if (min > max)
	{
		return (NULL);
	}
	else
	{
		int a = 0;
		int *my_arr = malloc(((max - min) + 1) * sizeof(int));

		if (my_arr == NULL)
		{
			return (NULL);
		}
		while (min <= max)
		{
			my_arr[a] = min;
			a++;
			min++;
		}
		return (my_arr);
	}
}
