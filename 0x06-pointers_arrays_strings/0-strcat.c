#include "main.h"

/**
 *_strcat - joins two strings
 *@dest: the destination string
 *@src: the source string
 *src will be concatenated to dest and stored in dest
 *
 *Return: the concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return dest;
}
