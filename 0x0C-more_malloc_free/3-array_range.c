#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * array_range - function to create an array of integers
 *
 * @min: parameter to identify integer
 *
 * @max: parameter to identify integer
 *
 * Return: if min > max return will be NULL
 * otherwise it will return a
 */
int *array_range(int min, int max)
{
	int *a;
	int i;
	int len;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	a = malloc(sizeof(int) * len);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		a[i] = min + i;
	return (a);
}
