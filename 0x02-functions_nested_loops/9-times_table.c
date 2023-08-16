#include "main.h"
/**
 * times_table - entry point that run the code
 *
 * Description: identify numbers with some functions
 *
 * printf:to print the target
 *
 * Return: 0 Always
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int x = i * j;

			if (j == 0)
			{
				_putchar(',');
				_putchar(' ');

				if (x >= 10)
				{
					_putchar(x / 10 + '0');
					_putchar(x % 10 + '0');
				}
				else
				{
					if (j != 0)
					{
						_putchar(' ');
					}
					_putchar(x + '0');
				}
			}
			_putchar('\n');


		}
	}
}
