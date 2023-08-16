#include "main.h"
/**
 * print_last_digit - function to print last number
 *
 * Description: print last digit
 *
 *@n: to check the numbers
 *
 * _putchar:to print the target
 *
 * Return: 0 Always
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
