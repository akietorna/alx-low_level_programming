#include "main.h"

/**
 *cap_string - capitalizes the firstletter of a string
 * @s: string to worked on
 * Return: a string s
 */

char *cap_string(char *s)
{
	int i = 1;

	while (s[i] != '\0')
	{
		if (s[i - 1] == ',' ||
		    s[i - 1] == ';' ||
		    s[i - 1] == '.' ||
		    s[i - 1] == '!' ||
		    s[i - 1] == '?' ||
		    s[i - 1] == '"' ||
		    s[i - 1] == '(' ||
		    s[i - 1] == ')' ||
		    s[i - 1] == '{' ||
		    s[i - 1] == '}')
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
			else if (s[i] >= 'A' && s[i] <= 'Z')
			{
				s[i] = s[i];
			}
			else if (s[i + 1] >= 'A' && s[i + 1] <= 'Z')
			{
				s[i + 1] = s[i + 1];
			}
			else if (s[i + 1] == '\n' || s[i + 1] == '\t')
			{
				s[i + 2] = s[i + 2] - 32;
			}
			else
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
		i++;
	}
	return (s);
}
