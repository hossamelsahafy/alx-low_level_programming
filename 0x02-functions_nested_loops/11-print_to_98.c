#include "main.h"
/**
 * print_to_98 -  to print numbers from n to 98
 *
 * Description: print nubers from n to 98
 *
 * _putchar: prints the target
 *
 * @n: to identify numbers
 *
 */
void print_to_98(int n)
{
	int b;

	if (n <= 98)
	{
		b = 1;
	}
	else
	{
		b = -1;
	}
		while (n != 99)
		{
			_putchar(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n = n + b;

		}
		_putchar('\n');
}
