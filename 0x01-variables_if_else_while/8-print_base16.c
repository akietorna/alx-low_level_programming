#include <stdio.h>

/**
 *main - entry point into the program
 *Description: listing base 16 numbers
 *@void: expect nothing at the end of the code
 *Return: Always 0 (success)
 */

int main(void)
{
	char my_num = '0';
	char my_char = 'a';

	while (my_num <= '9')
	{
		putchar(my_num);
		my_num++;
	}

	while (my_char <= 'f')
	{
		putchar(my_char);
		my_char++;
	}

	putchar('\n');

	return (0);
}
