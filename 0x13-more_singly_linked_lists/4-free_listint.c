#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - function to free a listint_t list
 *
 * @head: parameter that point to listint_t
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
