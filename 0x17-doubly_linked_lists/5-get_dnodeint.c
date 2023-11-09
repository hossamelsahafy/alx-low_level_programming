#include "lists.h"
#include <stdio.h>
/**
 * get_dnodeint_at_index - function that returns the nth
 * node of a dlistint_t linked list.
 *
 * @head: parameter that point to dlistint_t
 *
 * @index: parameter that point to unsigned int
 *
 * Return: if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}
	return (head);
}

