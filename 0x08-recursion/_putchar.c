#include "main.h"
#include <unistd.h>

/**
 *_putchar - prints a characther
 *@c: the charcther to be printed
 *
 *Return: Always 0(success)
 */

int _putchar(char c)
{
  return (write(1,&c,1));
}
