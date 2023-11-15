#include "main.h"

/**
 * print_triangle - forms a triangle with #
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int a = size;
		int b;
		int c;
		int d;

		for (b = 1; b <= size; b++)
		{
			for (c = 0; c < (a - b); c++)
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
