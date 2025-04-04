#include <stdio.h>

/**
 *main - entry point into the program
 *Description: listing alphabets in lower and upper case
 *@void: expect nothing at the end of the code
 *Return: Always 0 (success)
 */

int main(void)
{
	char abc = 'a';
	char ABC = 'A';

	while (abc <= 'z')
	{
		putchar(abc);
		abc++;
	}

	while (ABC <= 'Z')
	{
		putchar(ABC);
		ABC++;
	}

	putchar('\n');

	return (0);
}
