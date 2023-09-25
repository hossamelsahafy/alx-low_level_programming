#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - function to add a new node
 * at the end of a listint_t list
 *
 * @head: parameter point to listint_t
 *
 * @n: parameter point to const int
 *
 * Return: the address of the new element
 * or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node;
	listint_t l_node;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
	{
		return (NULL);
	}
	n_node->n = n;
	n_node->next = NULL;
	if (*head == NULL)
	{
		*head = n_node;
	}
	else
	{
		l_node = *head;
		while (l_node->next != NULL)
		{
			l_node = l_node->next;
			l_node->next = n_node;
		}
	}
	return (n_node);
}
