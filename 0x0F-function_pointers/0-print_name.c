#include "function_pointer.h"
#include <stdio.h>

/**
 * p_char - function to print char
 *
 * c: parameter to identify char
 */
void p_char(char c)
{
	printf("%c", c);
}
/**
 * print_name - function to print name
 *
 * @name: parameter point to char
 *
 * @f: parameter point to void
 */

void print_name(char *name, void (*f)(char *))
{
	while (name != '\0')
	{
		(f*name);
		name++;
	}
}
