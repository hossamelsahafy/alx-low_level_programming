#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function to return the nth
 * node of a listint_t linked list
 *
 * @head: parameter point to listint_t
 *
 * @index: parameter to iddentify unsigned int
 *
 * Return: will be head
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
