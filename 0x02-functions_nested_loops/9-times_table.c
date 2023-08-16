#include "main.h"
/**
 * times_table - entry point that run the code
 *
 * Description: nine time table
 *
 * _putchar:to print the target
 *
 * Return: 0 Always
 */
void times_table(void)
{
	int i;
	int j;
	int x;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 0; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			x = i * j;

			if (x <= 9)
				_putchar(' ');
				_putchar(x + '0');
			else
			{
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
