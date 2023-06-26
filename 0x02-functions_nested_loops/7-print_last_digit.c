#include "main.h"
#include <stdlib.h>

/**
 *print_last_digit - prints the last digit of a number
 *@j: takes in a number
 *Return: the last digit
 */

int print_last_digit(int j)
{
	int last_char = (j < 0) ? (j * -1) % 10 : j % 10;

	_putchar(last_char);

	return (last_char);
}
