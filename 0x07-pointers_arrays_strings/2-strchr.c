#include "main.h"
#include <stddef.h>

/**
 *_strchr - looks for the pointer to a character
 *@s: the string from which we look for the character
 *@c: the character to look for
 *Return: the pointer to the character and null if the character is not found
 */

char *_strchr(char *s, char c)
{
	unsigned int a = 0;

	while (s[a] != '\0')
	{
		if (s[a] == c)
		{
			return (s + a);
		}
		a++;
	}
	return (NULL);
}
