#include "main.h"
/**
 * print_triangle - function to make acool shape
 *
 * @size: to identify number of #
 *
 * Return: return to the begning
 *
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size - i; j++)
			putchar (' ');
		for (j = 1; j <= i; j++)
			putchar ('#');
		putchar ('\n');
	}
}
