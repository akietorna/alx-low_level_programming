#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *dlistint_len - prints number of elements in a linked list
 *@h: head of the linked list
 *Return: Number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *temp;
	int a = 0;

	if (h == NULL)
	{
		return (0);
	}
	a++;
	temp = h->next;
	while (temp != NULL)
	{
		a++;
		temp = temp->next;
	}
	return (a);
}
