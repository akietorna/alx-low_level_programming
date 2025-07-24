#include  "lists.h"
#include <stdlib.h>

/**
 *add_nodeint_end - add a node to the end of linked list
 *@head: the head of linked list
 *@n: integer
 *Return: pointer to new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;

	if (*head == NULL)
	{
		*head = malloc(sizeof(listint_t));
		if (*head == NULL)
		{
			return (NULL);
		}
		(*head)->n = n;
		(*head)->next = NULL;
		return (*head);
	}
	while (temp != NULL)
	{
		if (temp->next == NULL)
		{
			temp->next = malloc(sizeof(listint_t));
			if (temp->next == NULL)
			{
				return (NULL);
			}
			temp->next->n = n;
			temp->next->next = NULL;
			break;
		}
		temp = temp->next;
	}
	return (temp->next);
}
