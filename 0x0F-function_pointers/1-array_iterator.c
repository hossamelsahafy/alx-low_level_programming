#include "function_pointers.h"
#include <stdio.h>
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
 *
 * Return: if arraay or action == NULL it will exit
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
	{
		return;
	}
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
