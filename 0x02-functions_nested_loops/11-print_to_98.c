#include "main.h"
/**
 * print_to_98 - this function for prints all natural numbers
 * from n to 98, followed by a new line.
 *
 * _putchar: prints the target
 *
 * @n: to identify numbers
 *
 * Description: print _putchar
 *
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			_putchar(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			_putchar(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
