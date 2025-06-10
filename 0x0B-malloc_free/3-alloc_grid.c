#include <stdlib.h>
#include "main.h"

/**
 *alloc_grid - create a two dimensional array
 *@width: the width of the array
 *@height: the height of the array
 *Return: Pointer to the array
 */


int **alloc_grid(int width, int height)
{
	int **array;
	int a = 0;

	if ((height <= 0) || (width <= 0))
	{
		return (NULL);
	}
	array = (int **)malloc(height * sizeof(int *));
	if (array == NULL)
	{
		return (NULL);
	}
	while (a < height)
	{
		int b = 0;

		array[a] = (int *)malloc(width * sizeof(int));
		if (array[a] == NULL)
		{
			int i;

			for (i = 0; i < a; a++)
			{
				free(array[i]);
			}
			free(array);
			return (NULL);
		}
		while (b < width)
		{
			array[a][b] = 0;
			b++;
		}
		a++;
	}
	return (array);
}
