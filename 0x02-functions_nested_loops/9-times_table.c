#include "main.h"

/**
 *times_table - prints nine times table
 *
 *Return: Always 0(success)
 */

void times_table(void)
{
	int a = 0;

	while (a <= 9)
	{
		int b = 0;

		while (b <= 9)
		{
			int result;

			if (b == 9)
			{
				result = a * b;
				
				if (result > 9)
				{
					int char_1 = (result / 10) % 10;
					int char_2 = result % 10;
					
					_putchar(char_1 + '0');
					_putchar(char_2 + '0');
				}
				else
				{
					_putchar(result + '0');
				}
			}
			else
			{
				result = a * b;

				if (result > 9)
                                {
                                        int char_1 = ((result / 10) % 10);
                                        int char_2 = result % 10;

                                        _putchar(char_1 + '0');
                                        _putchar(char_2 + '0');
                                }
				else
				{
					_putchar(result + '0');
				}

				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}

			b++;
		}

		_putchar('$');
		_putchar('\n');
		a++;
	}
}
