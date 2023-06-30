#include "main.h"
#include <string.h>

/**
 *_strncat - joins two strings up to the nth byte
 *@dest: the destination string
 *@src: the source string
 *@n: the number of bytes to be concatenated to src
 *src will be concatenated to dest and stored in dest
 *
 *Return: the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
