#include "main.h"

/**
 *cap_string - capitalizes the firstletter of a string
 * @s: string to worked on
 * Return: a string s
 */

char *cap_string(char *s)
{
	unsigned int i = 0;

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] = s[0] - 32;
	}
	while (s[i] != '\0')
	{
		if (s[i] == ',' ||
		    s[i] == ';' ||
		    s[i] == '.' ||
		    s[i] == '!' ||
		    s[i] == '?' ||
		    s[i] == '"' ||
		    s[i] == '(' ||
		    s[i] == ')' ||
		    s[i] == '{' ||
		    s[i] == '}' ||
		    s[i] == ' ' ||
		    s[i] == '\t' ||
		    s[i] == '\n')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
		i++;
	}
	return (s);
}
