#include <stdio.h>
#include "main.h"
/**
 * main - this function for running the code
 *
 * _putchar: prints the target
 * Description: print alphabet
 *
 * Return: Always 0
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
		
