#include "main.h"
/**
 * print_rev - function to reverse the text
 *
 * @s: parameter point to char
 *
 * Return: to exit function
 */
void print_rev(char *s)
{
	if (*s == '\0')
		return;

	print_rev(s + 1);
	putchar (*s);
}
