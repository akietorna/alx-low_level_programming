#include "main.h"

/**
 * print_triangle - forms a triangle with #
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int b = 1;
	int c, d;

	if (size > 0)
	{
		for (b = 1; b <= size; b++)
		{
			for (c = 0; c < (size - b); c++)
			{
				_putchar(' ');
			}
			for (d = 0; d < b; d++)
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
