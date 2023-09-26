#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data
 * (n) of a listint_t linked list
 *
 * @head: parameter point to listint_t
 *
 * Return: will be  sum of data
 */

int sum_listint(listint_t *head)
{
	int s = 0;

	while (head != NULL)
	{
		s = s + head->n;
		head = head->next;
	}
	return (s);
}
