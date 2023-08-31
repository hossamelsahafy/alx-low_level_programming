#include "main.h"

/**
 * _sqrt_recursion - function to return the natural square root of a number
 *
 * @n: parameter to identify integer
 *
 * Return: if i * i == n it will be 1 else it will be -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (n);

	static int i = 1;

	if (i * i >= n)
	{
		int result = i;

		i = 1;
		return (result);
	}
	if (i * i == n)
	{
		int result = i;

		i = 1;
		return (result);
	}
	i++;
	return (_sqrt_recursion(n));
}
