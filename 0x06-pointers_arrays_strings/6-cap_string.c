#include "main.h"

/**
 *cap_string - capitalizes the firstletter of a string
 * @s: string to worked on
 * Return: a string s
 */

char *cap_string(char *s)
{
	unsigned int i = 0;

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
			else if ((s[i + 1] >= 'A' && s[i + 1] <= 'Z') ||
				 (s[i + 1] >= '0' && s[i + 1] <= '9'))
			{
				s[i + 1] = s[i + 1];
			}
		}
		i++;
	}
	return (s);
}
