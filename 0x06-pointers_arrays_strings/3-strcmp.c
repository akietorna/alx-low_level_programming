#include "main.h"
#include <string.h>

/**
 *_strcmp - compares two strings
 *@s1: the first string
 *@s2: the second string
 *
 *Return: Outcome of the compare
 */

int _strcmp(char *s1, char *s2)
{
	unsigned int a = 0;

	while (s1[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
		a++;
	}
	return (0);
}
