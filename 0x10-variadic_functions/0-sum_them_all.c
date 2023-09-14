#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - function to return the sum of all its parameters
 *
 * @n: parameter to idntify number of argyments
 *
 * Return: sum of arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	int count;
	int sum = 0;

	for (count = 0; count < n; count++)
	{
		sum = sum + *(int *)((char *)&n + sizeof(unsigned int) + count * sizeof(int));
	}
	return (sum);
}
