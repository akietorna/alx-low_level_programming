#include "main.h"

int palindrome_check(char *s, int n, int i);
int string_length(char *s);

/**
 *is_palindrome - checks for palindrome
 *@s: string to check
 *Return: 0 for false or 1 for true
 */

int is_palindrome(char *s)
{
	int n = 0;

	n = string_length(s);
	return (palindrome_check(s, n - 1, 0));
}

/**
 *string_length - prints the length of a string
 *@s: string whose length to be measured
 *Return: length of string
 */

int string_length(char *s)
{
	if (*s != '\0')
	{
		return (1 + string_length(s + 1));
	}
	else
	{
		return (0);
	}
}

/**
 *palindrome_check - checks if a word is the same in the reversed direction
 *@s: string to work on
 *@n: length of string
 *@i: beginning of string
 *Return: 0 for false and 1 for true
 */

int palindrome_check(char *s, int n, int i)
{
	if (s[i] == s[n])
	{
		return (palindrome_check(s, n - 1, i + 1));
	}
	else if (i >= n)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
