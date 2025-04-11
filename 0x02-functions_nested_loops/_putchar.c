#include "main.h"
#include <unistd.h>

/**
 *_putchar  - the starting point of program
 *Description - prints a character at a time, works like putchar
 *c - placeholder of the character
 *Return: The input character
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
