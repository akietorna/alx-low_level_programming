#include "main.h"
#include <unistd.h>

/**
 *_putchar  - the starting point of program
 *Description - prints a string
 *w - takes in a character
 *Return: Always 0(success)
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}


