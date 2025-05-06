#include "main.h"

/**
 *_strcpy - copies a string from a variable to another
 *@dest: where the string is copied to
 *@src: where the string is copied from
 *
 *Return: Always 0
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
