#include "main.h"

/**
 *print_alphabeth - prints alphabeths
 *@void - return nothing
 *Return: Always 0(success)
 */

void print_alphabeth(void)
{
	int my_char = "a";

	while (my_char <= "z")
	{
		_putchar(my_char);
		my_char++;
	}

	_putchar("\n");

	return (0);
}

