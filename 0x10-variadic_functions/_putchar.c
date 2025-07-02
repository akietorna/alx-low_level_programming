#include <unistd.h>

/**
 *_putchar - prints a character at a time
 *@c: the character
 *Return: the printed character
 */

int _putchar(char c)
{
	return (write(1,&c,1));
}
