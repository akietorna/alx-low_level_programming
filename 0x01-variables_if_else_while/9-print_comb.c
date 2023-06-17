#include <stdio.h>

/**
 *main - entry point into the program
 *Description: listing numbers
 *@void: expect nothing at the end of the code
 *Return: Always 0 (success)
 */

int main(void)
{
	char my_num = '0';

	while (my_num <= '9')
	{
		putchar(my_num);

		if (my_num < '9')
		{
			putchar(',');
			putchar(' ');
		}
		
		my_num++;
	}

	putchar('\n');

	return (0);
}
