#include "main.h"

/**
 * _print_rev_recursion - function to print a string in reverse
 *
 * @s: parameter that poin to char
 *
 * Return:  to exit the function
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar (*s);
}
