#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_print - function to function that prints a hash table.
 *
 * @ht: parameter that point to hash_table_t
 *
 * Return: will be NULL
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *n;
	char *sep = "";

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		n = ht->array[i];
		while (n != NULL)
		{
			printf("%s'%s': '%s'", sep, n->key, n->value);
			sep = ", ";
			n = n->next;
		}
	}
	printf("}");
}

