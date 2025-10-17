#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *print_dlistint - prints all elements in a linked list
 *@h: head of the linked list
 *Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *temp;
	int a = 0;

	if (h == NULL)
	{
		return (0);
	}
	printf("%i\n", h->n);
	a++;
	temp = h->next;
	while (temp != NULL)
	{
		printf("%i\n", temp->n);
		a++;
		temp = temp->next;
	}
	return (a);
}
