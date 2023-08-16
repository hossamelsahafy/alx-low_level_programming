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

	for (i = 0; i < 9 i++)
	{
		for (j = 0; j < 9; j++)
		{
			_putchar(i % 10 + '0');
			_putchar(i / 10 + '0');
			_putchar(',');
			_putchar(j % 10 + '0');
			_putchar(j / 10 + '0');
		}
	}
}

