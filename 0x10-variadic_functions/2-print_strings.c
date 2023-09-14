#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function to print strings, followed by a new line
 *
 * @separator: parameter point to const char
 *
 * @n: parameter to identify const unsigned integer
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int count;
	char *p;

	va_start(args, n);
	for (count = 0; count < n; count++)
	{
		p = va_arg(args, char *);
		if (p == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", p);
		}
		if (separator != NULL && count < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
