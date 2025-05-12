#include "main.h"
#include <unistd>

/**
 *_putchar: prints a charather at a time
 *Description: works like the function putchar
 *@c : placeholder for the character to be printed
 *Return: theprinted character
 */

int _putchar(int c)
{
	return (write(1,&c,1));
}
