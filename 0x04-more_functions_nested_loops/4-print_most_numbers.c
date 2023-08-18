#include "main.h"
/**
 * print_most_numbers - function to print numbers except 2 & 4
 *
 * Description: printing numbers from 1 to 9 excep 2 and 4
 *
 * _putchar: to print the target
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar (i+'0');
	}
	_putchar ('\n');
}
