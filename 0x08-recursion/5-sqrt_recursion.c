#include "main.h"
#include <math.h>

/**
 * MEOW_FOR_HELP - function to return the natural square root of a number
 *
 * @n: parameter to identify integer
 *
 * @i: to identfy integer
 *
 * Return: if i * i == n it will be result else it will be -1
 */
int MEOW_FOR_HELP(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (MEOW_FOR_HELP(n, i + 1));
}
/**
 * _sqrt_recursion - function to return the natural square root of a number
 *
 * @n: parameter to identify integer
 *
 * Return: will be the natural square root of n if it exists, otherwise -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (MEOW_FOR_HELP(n, 0));
}
