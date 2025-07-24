#include "lists.h"
#include <stdlib.h>

/**
 *free_listint - frees a linked list
 *@head: the head of the list
 *Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
