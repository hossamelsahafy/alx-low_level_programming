#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function to delete the head node
 * of a listint_t linked list
 * and returns the head node’s data (n)
 *
 * @head: parameter point to listint_t
 *
 * Return: if head or *head == NULL return will be 0
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	tmp = *head;
	n = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (n);
}
