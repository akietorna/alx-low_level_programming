#include "main.h"
#include <string.h>

/**
 *_strcpy - copies a string from a variable to another
 *@dest: where the string is copied to
 *@src: where the string is copied from
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return dest;
}
