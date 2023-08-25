#include "main.h"
/**
 * print_number - function to print number
 *
 * @n: parameter that define integer
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}
	if (num / 10 != 0)
	{
		print_number(num / 10);
	}
	putchar(num % 10 + '0');
}
