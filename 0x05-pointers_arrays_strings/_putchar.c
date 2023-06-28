#include "main.h"
#include <unistd.h>

/**
 *_putchar - prints charathers
 *@j: takes in a characther to be printed
 *
 *Return: the charather to be printed
 */

int _putchar(char j)
{
	return (write(1,&j,1));
}
