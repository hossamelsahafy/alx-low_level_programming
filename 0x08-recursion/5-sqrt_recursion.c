#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - function to return the natural square root of a number
 *
 * @n: parameter to identify integer
 *
 * Return: if i * i == n it will be result else it will be -1
 */
int _sqrt_recursion(int n)
{
	static int i = 1;

	if (i * i == n)
	{
		int result = i;
	
		i = 0;
		return (result);
	}
	if (i * i > n)
	{
		i = 0;
		return (-1);
	}
	i++;
	return (_sqrt_recursion(n));
}
