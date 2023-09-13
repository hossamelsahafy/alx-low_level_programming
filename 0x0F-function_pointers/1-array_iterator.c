#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - function to execute a function given as
 * a parameter on each element of an array
 *
 * @array: parameter point to integer
 *
 * @size: parameter to identify size_t
 *
 * @action: parameter point to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
