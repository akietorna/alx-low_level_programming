#include "main.h"

/**
 *print_chessboard - Prints a chessboard
 *@a: placeholder
 *Return: Nothing
 */

void print_chessboard(char (*a)[8])
{
	unsigned int b = 0;

	while (b < 8)
	{
		unsigned int c = 0;

		while (c < 8)
		{
			_putchar(a[b][c]);
			c++;
		}
		_putchar('\n');
		b++;
	}
}
