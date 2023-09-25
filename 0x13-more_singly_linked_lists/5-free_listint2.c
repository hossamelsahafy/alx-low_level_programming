#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - function to free a listint_t list
 *
 * @head: parameter that point to listint_t
 *
 * Return: if head == NULL it will exit
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}
