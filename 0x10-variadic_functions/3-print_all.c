#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_ char - function to print char
 *
 * @args: parameter to identify va_list
 */

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - function to print integer
 *
 * @args: parameter to identify va_list
 */

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - function to print float
 *
 * @args: parameter that point to va_list
 */

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - function to print string
 *
 * @args: parameter to identify args
 */

void print_string(va_list args)
{
	char *p;

	p = va_arg(args, char *);
	if (p == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", p);
	}
}

/**
 * print_all - function to print any thing
 *
 * @format: parameter point to const char
 */

void print_all(const char * const format, ...)
{
	char s;
	int i =0;
	va_list args;

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		s = format[i];
		if (s == 'c')
		{
			print_char(args);
		}
		else if (s == 'i')
		{
			print_int(args);
		}
		else if (s == 'f')
		{
			print_float(args);
		}
		else if (s == 's')
		{
			print_string(args);
		}
		if (format[i + 1] != '\0')
		{
			printf(", ");
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
