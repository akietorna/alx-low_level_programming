#include "main.h"

/**
 *print_last_digit - prints the last digit of a number
 *@j: takes in a number
 *Return: the last digit
 */

int print_last_digit(int j)
{
	int a;

	a = j % 10;

	if (a < 0)
	{
	        a = a * -1;

		_putchar('0' + a);
		return (a);
	}
	else
	{
		_putchar('0' + a);		
		return (a);
	}
}
