#include "main.h"

/**
 *print_last_digit - prints the last digit of a number
 *@v: takes in a number
 *Return: the last digit
 */

int print_last_digit(int v)
{
	_putchar(v % 10);
	return (v % 10);
}
