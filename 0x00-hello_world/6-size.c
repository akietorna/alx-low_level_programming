#include <stdio.h>
/**
 *main - starting point of the program
 *Description: print the size of types in c
 *@void: returns nothing at the end of the code
 *Return: Always 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
	print("Size of a char: %d bytes(s)", sizeof(a));
	print("Size of an int: %d bytes(s)", sizeof(b));
	print("Size of a long int: %d bytes(s)", sizeof(c));
	print("Size of a long long int: %d bytes(s)", sizeof(d));
	print("Size of a float: %d bytes(s)", sizeof(e));
	return (0);
}
