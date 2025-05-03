#include "main.h"

/**
 *rev_string - print a string in the reverse order
 *@s: takes in string to be converted
 *
 *Return: Always 0
 */

void rev_string(char *s)
{
	int len = 0;
	int a = 0;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}
	len--;
	while (a < len)
	{
		temp = s[a];
		s[a] = s[len];
		s[len] = temp;
		a++;
		len--;
	}
}
