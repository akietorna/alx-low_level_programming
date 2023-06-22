#include "main.h"

/**
 *islower - checks if character is lower case
 *_islower - checks if character is lower case and return 1 or 0
 *@c - inputed character 
 *Return: 1 if true and 0 if false
 */
int islower(int c);

int _islower(int c)
{
	return (islower(c) ? 1 : 0);
}
