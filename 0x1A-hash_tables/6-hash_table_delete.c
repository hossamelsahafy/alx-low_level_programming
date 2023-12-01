#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_delete - function that deletes a hash table
 *
 * @ht: parameter that point to hash_table_t
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *n, *tmp;

	if (ht == NULL)
	{
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		n = ht->array[i];
		while (n)
		{
			tmp = n->next;
			free(n->key);
			free(n->value);
			free(n);
			n = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
