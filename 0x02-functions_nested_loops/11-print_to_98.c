#include "main.h"
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			_putchar(n);
			if (n != 98)
				_putchar(',');
				_putchar(' ');
		}
	}
	else
	{
		for (; n >= 98; n++)
		{
			_putchar(n);
			if (n != 98)
				_putchar(',');
				_putchar(' ');
		}
	}
}
