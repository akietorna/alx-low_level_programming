#include "main.h"

/**
 *_memcpy - copies into the first n bytes of a memory space
 *Description: copies into a memory address' first n bytes
 *@des: pointer to the memory space to copy into
 *@src: what to copy into the memory space
 *@n: the number of bytes needed to fill
 *Return: pointer to the destination memory space
 */

char *_memcpy(char *des, char *src, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		des[a] = src[a];
		a++;
	}
	return (des);
}
