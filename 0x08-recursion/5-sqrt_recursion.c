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
	int i = 1;

	if (i * i == n)
	{
		return (i);
	}
	if (i * i < n)
	{
		return (-1);
	}
	if (i * i > n)
	{
		i = 1;
		return (-1);
	}
	i++;
	return (_sqrt_recursion(n));

}
