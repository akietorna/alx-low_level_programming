#include <unistd.h>
#include "lists.h"
/**
 *_putchar - prints a character
 *@c: the character
 *Return: 0-success
 */

int _putchar(char c)
{
	return (write(1,&c,1));
}
