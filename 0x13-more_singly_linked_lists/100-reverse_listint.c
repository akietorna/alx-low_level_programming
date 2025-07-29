#include "lists.h"
#include <stdlib.h>

/**
 *reverse_listint - reverses a linked list
 *@head: the head of the list
 *Return: pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *past = NULL;
	listint_t *fut;

	if (*head == NULL || (*head)->next == NULL)
	{
		return (*head);
	}
	while (*head != NULL)
	{
		fut = (*head)->next;
		(*head)->next = past;
		past = *head;
		*head = fut;
	}
	*head = past;
	return (*head);
}
