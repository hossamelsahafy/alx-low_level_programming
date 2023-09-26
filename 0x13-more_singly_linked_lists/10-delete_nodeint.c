#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - function to delete
 *the node at index index of a listint_t linked list
 *
 * @head: parameter point to listint_t
 *
 * @index: parameter to identify unsigned int
 *
 * Returns: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *c;
	listint_t *tmp;
	unsigned int i;

	if (head == NULL || * head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	c = *head;

	for (i = 0; i < index -1; i++)
	{
		if (c->next == NULL)
		{
			return (-1);
			c = c->next;
		}
	}
	tmp = c->next;
	c->next = tmp->next;
	free(tmp);
	return (1);
}
