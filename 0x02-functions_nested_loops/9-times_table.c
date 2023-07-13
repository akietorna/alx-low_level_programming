#include "main.h"

/**
 *times_table - prints nine times table
 *big_value - prints values bigger than nine
 *@value: takes in the value
 *Return: Always 0(success)
 */


void big_value(int value, int b);

void big_value(int value, int b)
{
	if (value > 9)
        {
		int char_1 = (value / 10) % 10;
		int char_2 = value % 10;

		_putchar(' ');
                _putchar(char_1 + '0');
                _putchar(char_2 + '0');
	}
        else
	{
		if (b != 0)
		{
			_putchar(' ');
			_putchar(' ');
		}
		_putchar(value + '0');	
        }
}


void times_table(void)
{
	int a = 0;

	while (a <= 9)
	{
		int b = 0;

		while (b <= 9)
		{
			int result = a * b;

			if (b == 9)
			{
				big_value(result, b);
			}
			else
			{
				big_value(result, b);
				_putchar(',');
			}

			b++;
		}

		_putchar('\n');
		a++;
	}
}
