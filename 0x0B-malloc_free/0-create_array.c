#include "main.h"
#include <stdlib.h>

/**
 * create_array - function to creat an array of chars
 * and initializes it with a specific char
 *
 * @size: parameter to identify unsigned int
 *
 * @c: parameter ti identify char
 *
 * Return: if size == NULL return will be NULL
 * if arr == NULL return will be NULL
 * otherwise 0
 */
char *create_array(unsigned int size, char c)
{
	char *arr = NULL;
	unsigned int i;

	if (size == NULL)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (0);
}
