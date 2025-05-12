#include "main.h"

/**
 *_memset: fills the first n bytes of a memory space
 *@s: pointer to the memory space to fill
 *@b: what to be used to fill the memory space
 *@n: the nuber of bytes needed to fill
 *Return: pointer to the memory space
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;
	while (a < n)
	{
		s[a] = b;
		a++;
	}
	return (s);
}
