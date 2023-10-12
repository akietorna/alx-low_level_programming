#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints an alphabet
 * @c: characther to be printed
 * Return c
 */

int _putchar(char c)
{
	return (write(1,&c,1));
}
