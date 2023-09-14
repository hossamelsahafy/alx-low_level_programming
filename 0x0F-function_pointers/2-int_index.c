#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function to searche for an integer
 *
 * @array: parameter that point to integer
 *
 * @size: parameter to identify size
 *
 * @cmp: parameter point to function
 *
 * Return: if cmp or array == NULL or size <= 0 return will be -1
 * if cmp(array[i]) != 0 return will be i
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp  == NULL || array == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
