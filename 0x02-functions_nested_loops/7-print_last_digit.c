#include "main.h"
#include <stdlib.h>

/**
 *_abs - prints absolute value of numbers
 *print_last_digit - prints the last digit of a number
 *@j: takes in a number
 *Return: the last digit
 */

int abs(int j);

int print_last_digit(int j)
{
	int a = abs(j) % 10;
	_putchar(a);
	_putchar(a);
	return (a);
}
