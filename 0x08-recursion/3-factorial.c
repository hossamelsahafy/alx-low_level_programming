#include "main.h"

/**
 * factorial - function to return the factorial of a given number
 *
 * @n: parameter that identify integer
 *
 * Return: if n < 0 it will return -1
 * if n == 0 return will be 1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
