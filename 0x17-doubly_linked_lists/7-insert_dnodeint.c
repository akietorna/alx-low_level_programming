#include <stdlib.h>
#include "lists.h"

/**
 *insert_dnodeint_at_index - insert a node at an index
 *@h: head node
 *@idx: index to insert at
 *@n: integer to insert
 *Return: address of inserted node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;
	dlistint_t *temp2;
	unsigned int a = 0;

	if (idx == 0)
	{
		temp = *h;
		*h = malloc(sizeof(dlistint_t));
		if (*h == NULL)
		{
			return (NULL);
		}
		(*h)->prev = NULL;
		(*h)->next = temp;
		(*h)->n = n;
		return (*h);
	}
	temp = *h;
	while (temp != NULL && a < idx)
	{
		if (a == idx - 1)
		{
			temp2 = temp->next;
			temp->next = malloc(sizeof(dlistint_t));
			if (temp->next == NULL)
			{
				return (NULL);
			}
			temp->next->next = temp2;
			temp->next->prev = temp;
			temp->next->n = n;
			temp2->prev = temp->next;
			return (temp->next);
		}
		a++;
		temp = temp->next;
	}
	return (NULL);
}
