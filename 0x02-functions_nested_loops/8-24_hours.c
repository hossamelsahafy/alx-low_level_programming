#include "main.h"
/**
 * jack_bauer - funckion to print time
 *
 * Description: print time
 *
 * printf:to print the target
 *
 */
void jack_bauer(void)
{
	int hour,  min;

	for (hour = 0; hour < 24; hour++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar(hour / 10 + '0');
			_putchar(hour % 10 + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');
			_putchar('\n');

		}
	}
}
