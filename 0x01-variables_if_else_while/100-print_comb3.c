#include <stdio.h>

/**
 *main - entry point into the program
 *Description: listing double digit numbers
 *@void: expect nothing at the end of the code
 *Return: Always 0 (success)
 */

int main(void)
{
	int my_num = '0';

	while (my_num <= '9')
	{
		int my_num2 = '1';

		while (my_num2 <= '9')
		{
			if (my_num != my_num2 && my_num < my_num2 && my_num < '9')
			{
				putchar(my_num);
				putchar(my_num2);

				if (my_num != '8')
				{
					putchar(',');
					putchar(' ');
				}
			}

			my_num2++;
		}

		my_num++;
	}

	putchar('\n');

	return (0);
}
