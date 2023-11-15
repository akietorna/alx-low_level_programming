#include "main.h"

/**
 * print_square - prints a square from hash
 * @size: the size of the square
 */

void print_square(int size)
{
	int a;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			int b;

			for (b = 0; b < size; b++)
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
