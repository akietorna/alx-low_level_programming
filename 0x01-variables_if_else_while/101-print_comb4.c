#include <stdio.h>

/**
 *main - entry point into the program
 *Description: listing double digit numbers
 *@void: expect nothing at the end of the code
 *Return: Always 0 (success)
 */

int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		int num2 = '1';

		while (num2 <= '9')
		{
			int num3 = '2';

			while (num3 <= '9')
			{
				if (num != num2 && num != num3 && num2 != num3 && num < num2 && num2 < num3 && num < '8' && num2 < '9')
				{
					putchar(my_num);
					putchar(my_num2);
					putchar(my_num3);

					if (my_num != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}

				my_num3++;
			}

			my_num2++;
		}
		my_num++;
	}

	putchar('\n');

	return (0);
}
