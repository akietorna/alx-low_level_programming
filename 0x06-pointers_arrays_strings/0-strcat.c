#include "main.h"
#include <string.h>

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
	strcat(dest, src);
	return (dest);
}
