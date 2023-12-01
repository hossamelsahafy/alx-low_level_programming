#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_create - function to creat hash table
 *
 * @size: parameter to identify unsigned long int
 *
 * Return: the new table otherwise NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *n_t;
    unsigned int i;

    n_t = malloc(sizeof(hash_table_t));
    if (n_t == NULL)
    {
        return (NULL);
    }
    n_t->size = size;
    n_t->array = malloc(sizeof(hash_node_t *) * size);
    if (n_t->array == NULL)
    {
        free(n_t);
        return (NULL);
    }
    for (i = 0; i < size; i++)
    {
        n_t->array[i] = NULL;
    }
    return (n_t);
}
