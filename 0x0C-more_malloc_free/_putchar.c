#include <unistd.h>
#include "main.h"

/**
 *_putchar - prints a character at a time
 *@c: the character to print
 *Return: the printed character
 */

int _putchar(char c)
{
	return (write(1,&c,1));
}
