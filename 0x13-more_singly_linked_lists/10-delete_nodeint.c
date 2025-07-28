#include "lists.h"
#include <stdlib.h>

/**
 *delete_nodeint_at_index - pop node at index of linked list
 *@head: the head of linked list
 *@index: the index
 *Return: 1-success or -1-failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;
	listint_t *delt;
	listint_t *temp = *head;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (a = 0; a < (index -1); a++)
	{
		if (temp == NULL || temp->next == NULL)
		{
			return (-1);
		}
		temp = temp->next;
	}
	if (temp->next == NULL )
	{
		return (-1);
	}
	delt = temp->next;
	temp->next = temp->next->next;
	free(delt);
	return (1);
}
