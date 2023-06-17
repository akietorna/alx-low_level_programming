#include <stdio.h>

/**
 *main - entry point into the program
 *Description: listing alphabets in lower case
 *@void: expect nothing at the end of the code
 *Return: Always 0 (success)
 */

int main(void)
{
	char my_alphabet = 'a';

	while (my_alphabet <= 'z')
	{
		putchar(my_alphabet);
		my_alphabet++;
	}

	putchar('\n');

	return (0);
}
