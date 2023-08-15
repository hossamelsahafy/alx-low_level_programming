#include <stdio.h>
#include "main.h"
/**
 * print_alphabet -  function that prints the lowercase alphabet
 *
 * _putchar: prints the target
 *
 * Description: print alphabet
 *
 * Return = void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
