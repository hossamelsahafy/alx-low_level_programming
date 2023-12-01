#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - function that adds an element to the hash table.
 *
 * @ht: parameter that point to hash_table_t
 *
 * @key: parameter that point to const char
 *
 * @value: parameter that point to const char
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *n_n, *tmp;

	if (!ht || !key || !*key || !value || !(n_n = malloc(sizeof(hash_node_t))) || !(n_n->key = strdup(key)) || !(n_n->value = strdup(value)))
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (!strcmp(tmp->key, key))
		{
			free(tmp->value);
			tmp->value = n_n->value;
			free(n_n->key);
			free(n_n);
			return (1);
		}
		tmp = tmp->next;
	}
	n_n->next = ht->array[index];
	ht->array[index] = n_n;
	return (1);
}
