#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 *add_node_end - adds a node to the end of a linked list
 *@head: head node
 *@str: string to be copied
 *Return: pointer to the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = *head;

	if (temp == NULL)
	{
		temp = malloc(sizeof(list_t));
		if  (temp == NULL)
		{
			return (NULL);
		}
		temp->str = strdup(str);
		if (temp->str == NULL)
		{
			free(temp);
			return (NULL);
		}
		temp->next = NULL;
		temp->len = _strlen(temp->str);
		*head = temp;
		return (*head);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = malloc(sizeof(list_t));
	if (temp->next == NULL)
	{
		return (NULL);
	}
	temp->next->str = strdup(str);
	if (temp->next->str == NULL)
	{
		free(temp->next);
		return (NULL);
	}
	temp->next->next = NULL;
	temp->next->len = _strlen(temp->next->str);
	return (temp->next);
}


/**
 *_strlen - gets the length of a string
 *@str: the string
 *Return: length of the string
 */

int _strlen(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}
