#include "main.h"

/**
 *print_alphabet_x10 - prints alphabets 10 times
 *@void - return nothing
 */

void print_alphabet(void)
{
	int my_char = 'a';
	int a = 0;

	while (a < 10)
	{
		while (my_char <= 'z')
		{
			_putchar(my_char);
			my_char++;
		}
	}

	_putchar('\n');
}

