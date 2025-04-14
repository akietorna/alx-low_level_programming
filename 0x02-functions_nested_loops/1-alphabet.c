#include "main.h"

/**
 *print_alphabet - prints alphabets
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
