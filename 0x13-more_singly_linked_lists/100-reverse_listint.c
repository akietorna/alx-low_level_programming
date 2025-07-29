#include "lists.h"
#include <stdlib.h>

/**
 *reverse_list - reverses a linked list
 *@head: the head of the list
 *Return: pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *past = NULL;
	listint_t *pres = *head;
	listint_t *fut;

	if (*head == NULL || (*head)->next == NULL)
	{
		return (*head);
	}
	while (pres != NULL)
	{
		fut = pres->next;
		pres->next = past;
		past = pres;
		pres = fut;
	}
	*head = past;
	return (*head);
}
