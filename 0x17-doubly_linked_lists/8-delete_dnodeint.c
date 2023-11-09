#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - function that deletes the node at
 * index index of a dlistint_t linked list
 *
 * @head: parameter that point to dlistint_t
 *
 * @index: parameter that point to unsssigned int
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *c;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	c = *head;
	if (index == 0)
	{
		*head = c->next;
		if (c->next != NULL)
		{
			c->next->prev = NULL;
		}
		free(c);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (c == NULL)
		{
			return (-1);
		}
		c = c->next;
	}
	if (c->next != NULL)
	{
		c->next->prev = c->prev;
	}
	if (c->prev != NULL)
	{
		c->prev->next = c->next;
	}
	free(c);
	return (1);
}

