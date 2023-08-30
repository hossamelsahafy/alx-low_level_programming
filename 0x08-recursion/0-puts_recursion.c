#include "main.h"

/**
 * _puts_recursion - function to print string followed by new line
 *
 * @s: parameter  poin to char
 *
 * Return: to exit the function incase it has printed all characters
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
