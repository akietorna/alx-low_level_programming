#include "main.h"

/**
 * print_triangle - forms a triangle with #
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		for (int b = 1; b <= size; b++)
		{
			for (int c = 0; c < (size - b); c++)
			{
				_putchar(' ');
			}
			for (int d = 0; d < b; d++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
