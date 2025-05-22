#include <unistd.h>
#include "main.h"

/**
 *_putchar - prints characters of a string
 *@c: placeholder of the character
 *
 *Return: the character to be printed
 */

char _putchar(char c)
{
	return (write (1, &c, 1));
}
