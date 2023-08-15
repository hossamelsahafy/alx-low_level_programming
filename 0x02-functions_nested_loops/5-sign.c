#include "main.h"
/**
 * print_sign - to check the positive ,negative and 0
 *
 * _putchar: print the target
 *
 * @n: character to check
 *
 * Description: checking for the positive and negative num
 *
 * Return: If n is greater than zero,
 * the function returns 1 to indicate that n is positive.
 *
 * If n is equal to zero,
 * the function returns 0 to indicate that n is zero.
 *
 * If n is less than zero,
 * the function returns -1 to indicate that n is negative.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
