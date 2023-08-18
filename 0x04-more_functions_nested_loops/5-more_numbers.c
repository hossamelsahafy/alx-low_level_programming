#include "main.h"
/**
 * void more_numbers - function to print numbers 10 times
 *
 * _putchar: to print the target
 */
void more_numbers(void)
{
	int x
	int y;
	int z;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14 y++)
		{
			z = y;
			if (z > 9)
			{
				_putchar (1 + '0');
				z = y % 10;
			}
			_putchar (z + '0');

		}
		_putchar('\n')
	}
}
