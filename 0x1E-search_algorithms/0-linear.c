#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * linear_search - Function  that searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: The integer array to be searched
 *
 * @size: The size of the array
 *
 * @value: The value to be found
 *
 * Return: index where value is located
 *	if value is not present in array or
 *	if array is NULL, your function must return -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
