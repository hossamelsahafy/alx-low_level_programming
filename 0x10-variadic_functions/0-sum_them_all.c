#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function to return the sum of all its parameters
 *
 * @n: parameter to idntify number of argyments
 *
 * Return:if n == 0 it will be 0 otherwise sum of arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int count;
	va_list args;
	int sum = 0;

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
