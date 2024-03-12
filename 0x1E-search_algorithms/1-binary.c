#include "search.h"
#include <stdio.h>

/**
 * Print_Array_Helper - helper function
 *
 * @array: The integer array to be searched
 *
 * @start: Index To Start From
 *
 * @end: Index To End At
 */
void Print_Array_Helper(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i < end; i++)
	{
		printf("%d", array[i]);
		if (i < end - 1)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
	}
}

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                  using the Binary search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where value is located
 *         If value is not present in array or if array is NULL, -1
 *
 * Every time the array being searched changes, it is printed
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start = 0;
	size_t mid;
	size_t end = size - 1;

	if (array == NULL)
	{
		return (-1);
	}
	while (start <= end)
	{
		Print_Array_Helper(array, start, end + 1);
		mid = start + (end - start) / 2;
		if (array[mid] < value)
		{
			start = mid + 1;
		}
		else if (array[mid] > value)
		{
			end = mid - 1;
		}
		else
		{
			return (mid);
		}
	}
	return (-1);
}
