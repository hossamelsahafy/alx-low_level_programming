#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - function that return the index at which the key/value pair
 * should be stored in the array of the hash table
 *
 * @key: parameter that point to const unsigned char
 *
 * @size: parameter that point to unsigned long int
 *
 * Return: the index at which the key/value pair
 * should be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
