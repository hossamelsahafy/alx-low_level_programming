#include "main.h"
#include <string.h>
/**
 * print_rev - function to reverse the text
 *
 * @s: parameter point to char
 *
 * Return: to exit function
 */
void print_rev(char *s)
{
	int i;

	i = strlen(s) - 1;

	while (i >= 0)
	{
		putchar(*(s + i));
		i--;
	}
	putchar('\n');
}
