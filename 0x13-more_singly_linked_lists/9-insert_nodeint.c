#include "lists.h"
#include <stdlib.h>

/**
 *insert_nodeint_at_index - insert a node at a position in linked list
 *@head: head of the list
 *@idx: positio to insert the node
 *@n: data to insert
 *Return: address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp = *head;
	unsigned int a;

	for (a = 0; a < idx; a++)
	{
		if (temp == NULL)
		{
			return (NULL);
		}
		temp = temp->next;
	}
	new = temp;
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		temp = new;
		return (NULL);
	}
	temp->next = new;
	temp->n = n;
	return (temp);
}
