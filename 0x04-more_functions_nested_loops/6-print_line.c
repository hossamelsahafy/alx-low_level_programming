#include "main.h"

/**
 *  print_line - function to print numbers 10 times
 *
 * @n: identify numbers
 *
 * _putchar: to print the target
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		putchar ('_');
	}
	putchar ('\n');
}
