#include "main.h"

/**
 *print_last_digit - prints the last digit of a number
 *@j: takes in a number
 *Return: the last digit
 */

int print_last_digit(int j)
{
	if (j < 0)
	{
		int a = 0;
		j = j * -1;
		a = (int)j % 10;

		_putchar('0' + a);
		return (a);
	}
	else
	{
		int a = 0;
		a = (int)j % 10;

		_putchar('0' + a);
		return (a);
	}
}
