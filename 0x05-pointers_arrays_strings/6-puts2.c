#include "main.h"

/**
 * puts2 - function to print every other character of a string
 *
 * @str: parameter that point to char
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i]; i += 20)
	{
		_putchar (str[i]);
	}
	_putchar ('\n');
}
