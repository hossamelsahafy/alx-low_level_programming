#include "main.h"
/**
 * print_diagonal - function to print diagonal
 * @n: parameter t identify number
 * Return: always n
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 1; i < n; i++)
		{
			for (j = 1; j < i; j++)
			{
				_putchar (' ');
			}
			_putchar ('/');
			_putchar ('\n');
		}

	}
	else
	{
		_putchar ('\n');
	}

}
