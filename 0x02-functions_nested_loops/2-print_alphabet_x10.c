#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints the lowercase alphabet 10 times
 *
 * Description: This function uses two nested loops to print the
 * lowercase alphabet 10 times. Each iteration of the alphabet is
 * followed by a newline character.
 *
 * Return: void
 */
void  print_alphabet_x10(void)
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
