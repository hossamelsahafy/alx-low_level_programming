#include "main.h"

/**
 * _pow_recursion - functioin to return the value of x raised to the power of y
 *
 * @x: parameter to identify integer
 *
 * @y: parameter to identify integer
 *
 * Return: if y < 0 retuen will be -1
 * if y == 0 return will be 1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{

		return (-1);
	}
	if (y == 0)
	{

		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
