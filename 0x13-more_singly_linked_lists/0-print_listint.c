#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 *print_listint - print all element in a linked list
 *@h: head of the list
 *Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int a = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		a++;
		h = h->next;
	}
	return (a);
}
