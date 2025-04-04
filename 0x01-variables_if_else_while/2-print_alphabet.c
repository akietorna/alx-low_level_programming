#include <stdio.h>

/**
 *main - entry point into the program
 *Description: listing alphabets in lower case
 *@void: expect nothing at the end of the code
 *Return: Always 0 (success)
 */

int main(void)
{
	char abc = 'a';

	while (abc <= 'z')
	{
		putchar(abc);
		abc++;
	}

	putchar('\n');

	return (0);
}
