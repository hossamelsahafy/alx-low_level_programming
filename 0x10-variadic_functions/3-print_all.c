#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function to print any thing
 *
 * @format: parameter point to const char
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int p = 0;
	char *s;
	int i = 0;

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		if (p != 0)
		{
			printf(", ");
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				p = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				p = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				p = 1;
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				p = 1;
				break;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
