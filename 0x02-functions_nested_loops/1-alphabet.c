#include "main.h"

/**
 *print_alphabeth - prints alphabeths
 *@void - return nothing
 */

void print_alphabet(void)
{
	int my_char = 'a';

	while (my_char <= 'z')
	{
		_putchar(my_char);
		my_char++;
	}

	_putchar('\n');
}

