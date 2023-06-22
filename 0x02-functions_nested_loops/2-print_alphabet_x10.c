#include "main.h"
#include <stdio.h>

/**
 *print_alphabet_x10 - prints alphabets 10 times
 *@void - return nothing
 */

void print_alphabet_x10(void)
{
	int my_char = 'a';
	int num = 0;

	while (num <= 9)
	{
		while (my_char <= 'z')
		{
			_putchar(my_char);
			my_char++;
		}

		num++;
	}

	_putchar('\n');
}

