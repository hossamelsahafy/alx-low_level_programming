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
	unsigned int count;
	int sum = 0;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (count = 0; count < n; count++)
	{
		sum = sum + va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
