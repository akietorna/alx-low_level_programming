#include "main.h"

/**
 *leet - encodes a string into 1337
 *@s: the string to encode
 *
 *Return: the encoded string
 */

char *leet(char *s)
{
	unsigned int b = 0;
	char str[] = "AaEeOoTtLl";
	char num[] = "4433007711";

	while (s[b] != '\0')
	{
		unsigned int c = 0;

		while (str[c] != '\0')
		{
			if (s[b] == str[c])
			{
				s[b] = num[c];
			}
			c++;
		}
		b++;
	}
	return (s);
}
