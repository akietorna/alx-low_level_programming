#include <stdio.h>

/**
 *main - entry point into the program
 *Description: listing alphabets in lower and upper case
 *@void: expect nothing at the end of the code
 *Return: Always 0 (success)
 */

int main(void)
{
	char my_alphabet = 'a';
	char my_U_alphabet ='A';

	while (my_alphabet <= 'z')
	{
		putchar(my_alphabet);
		my_alphabet++;
	}

	while (my_U_alphabet <= 'Z')
	{
		putchar(my_U_alphabet);
		my_U_alphabet++;
	}

	putchar('\n');

	return (0);
}
