#include "main.h"
#include <string.h>
/**
 * puts_half - function to print the second half of string
 *
 * @str: parameter point to char
 */
void puts_half(char *str)
{
	int len;
	int i;

	len = strlen(str);
	if (len % 2 == 0)
		i = len / 2;
	else
		i = (len + 1) / 2;
	for (; i < len; i++)
		_putchar (str[i]);
	_putchar ('\n');
}
