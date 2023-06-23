#include "main.h"

/**
 *_abs - prints absolute value of numbers
 *print_last_digit - prints the last digit of a number
 *@v: takes in a number
 *Return: the last digit
 */
int _abs(int);

int print_last_digit(int v)
{
	int a = _abs(v) % 10;
	_putchar(a);
	_putchar(a);
	return (a);
}
