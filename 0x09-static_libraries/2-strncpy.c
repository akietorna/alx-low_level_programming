#include "main.h"
#include <string.h>

/**
 *_strncpy - copies a string up to the nth byte
 *@dest: the destination pointer
 *@src: the source pointer
 *@n: the number of bytes to be concatenated to src
 *
 *Return: the concatenated string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
