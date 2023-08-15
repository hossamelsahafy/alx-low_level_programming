#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints the lowercase alphabet for 10 times
 *
 * _putchar: prints the target
 *
 * Description: print alphabet
 *
 * Return = void
 */
void  print_alphabet(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c < 'z'; c++)
		{
			_putchar (c);
		}
	}
_putchar ('\n');
}
