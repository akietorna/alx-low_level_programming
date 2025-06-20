#include <stdlib.h>
#include "main.h"

void print_error(void);
int check_int(char *s);
int len(char *s);
char *multply(int len1, int len2, char *num1, char *num2);
void print_result(char *result);

/**
 *main - multiply two integer arguments
 *@argc: argument counter
 *@argv: argument array
 *Return: 0-success
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	char *result;

	if (argc != 3)
	{
		print_error();
		exit(98);
	}
	num1 = check_int(argv[1]);
	num2 = check_int(argv[2]);
	if (num1 == 1 || num2 == 1)
	{
		print_error();
		exit(98);
	}
	result = multply(len(argv[1]), len(argv[2]), argv[1], argv[2]);
	print_result(result);
	free(result);
	return (0);
}

/**
 *len - get length of a string
 *@s: the string
 *Return: length of the string
 */

int len(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}


/**
 *print_error - print error message
 *Return: Nothing
 */

void print_error(void)
{
	char *s = "Error\n";
	int a = 0;

	while (s[a] != '\0')
	{
		_putchar(s[a]);
		a++;
	}
}

/**
 *check_int - check if argument is a positive integer
 *@s: the argument
 *Return: 0-true, 1- false
 */

int check_int(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		if (!(s[a] >= '0' && s[a] <= '9'))
		{
			return (1);
		}
		a++;
	}
	return (0);
}


/**
 *multply - multiplies two large numbers
 *@num1: the first number
 *@len1: length of the first number
 *@len2: length of the second number
 *@num2: the second number
 *Return: int value
 */

char *multply(int len1, int len2, char *num1, char *num2)
{
	int a;
	int b;
	int c;
	char *result = malloc((len1 + len2 + 1) * sizeof(char));

	if (result == NULL)
	{
		print_error();
		exit(98);
	}
	for (c = 0; c <= (len1 + len2); c++)
	{
		result[c] = 0;
	}
	for (a = len1 - 1; a >= 0; a--)
	{
		for (b = len2 - 1; b >= 0; b--)
		{
			int pos1 = a + b;
			int pos2 = a + b + 1;
			int mult = 0;

			mult = (num1[a] - '0') * (num2[b] - '0');
			mult += result[pos2];
			result[pos2] = mult % 10;
			result[pos1] += mult / 10;
		}
	}
	for (c = 0; c < (len1 + len2); c++)
	{
		result[c] += '0';
	}
	result[len1 + len2] = '\0';
	return (result);
}

/**
 *print_result - print result of multiplication
 *@result: the result
 *Return: Nothing
 */

void print_result(char *result)
{
	int a = 0;
	int b;
	int start = 0;

	while (result[a] != '\0')
	{
		if (result[a] != '0')
		{
			start = 1;
		}
		if (start == 1)
		{
			_putchar(result[a]);
		}
		a++;
	}
	if (start == 0)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(result[b]);
		}
	}
	_putchar('\n');
}
