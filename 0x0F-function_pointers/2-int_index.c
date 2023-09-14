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
 * otherwise 1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp  == NULL || array == NULL || size <= 0)
	{
		return (-1);
	}
	for (count = 0; count < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (1);
		}
	}
}
