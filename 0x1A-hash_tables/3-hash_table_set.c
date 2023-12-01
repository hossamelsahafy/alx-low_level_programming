#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *n_n, *tmp;

    if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
    {
        return (0);
    }
    index = key_index((const unsigned char *)key, ht->size);
    tmp = ht->array[index];
    while (tmp != NULL)
    {
        if (strcmp(tmp->key, key) == 0)
        {
            free(tmp->value);
            tmp->value = strdup(value);
            if (tmp->value == NULL)
            {
                return (0);
            }
            return (1);
        }
        tmp = tmp->next;
    }
    n_n = malloc(sizeof(hash_node_t));
    if (n_n == NULL)
    {
        return (0);
    }
    n_n->key = strdup(key);
    if (n_n->key == NULL)
    {
        free(n_n);
        return (0);
    }
    n_n->value = strdup(value);
    if (n_n->value == NULL)
    {
        free(n_n->key);
        free(n_n);
        return (0);
    }
    n_n->next = ht->array[index];
    ht->array[index] = n_n;
    return (1);
}