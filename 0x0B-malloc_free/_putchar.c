#include <unistd.h>
#include "main.h"

/**
 *_putchar - prints a character
 *@c: placeolder of the character
 *Return: the character
 */

char _putchar(char c)
{
	return (write(1,&c,1));
}
