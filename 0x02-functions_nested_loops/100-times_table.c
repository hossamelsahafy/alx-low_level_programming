#include "main.h"
/**
 * print_times_table - function to print time table
 *
 * Description: print time table
 *
 * @n:to identify number
 *
 * _putchar: to print the target
 */
void print_times_table(int n)
{
	int z, y, x;

	if (n <= 15 && n >= 0)
	{
		for (x = 0; x <= n; x++)
		{
			_putchar(0);
			for (y = 1; y <= n; y++)
			{
				_putchar(',');
				_putchar(' ');

				z = y * x;
				if (z <= 9)
					_putchar(' ');
				if (z <= 99)
					_putchar(' ');
				if (z >= 100)
				{
					_putchar(z / 100 + '0');
					_putchar(z / 100 + '0');
					_putchar(z % 10 + '0');
				}
				else if (z <= 100 && z >= 10)
					_putchar(z / 10 + '0');
				_putchar(z % 10 + '0');
			}
			_putchar('\n');
		}

	}
}





