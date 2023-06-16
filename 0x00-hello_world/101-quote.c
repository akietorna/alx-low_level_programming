#include <stdio.h>
/**
 *main - entry point to the program
 *write: does the output in place of printf
 *@void: expect nothing from the code
 *@filedes: is the file descriptor
 *@buf: is the buffer in which the string is written into
 *@nbyte: gives the number of bytes needed
 *Description: Outputing without using the printf
 *Return 1 which output to standard error
 *Return 0 which mean success
 */
int write(int filedes, const char *buf, unsigned int nbyte);

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
