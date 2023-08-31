#include "main.h"

/**
 * is_divisible - function to check if a number is divisible
 * by another number
 *
 * @n: parameter to identify integer
 *
 * @i: parameter to identify integer
 *
 * Return: if i == n it will be 0
 * if n % i == 0 return will be 1
 */
int is_divisible(int n, int i)
{
	if (i == n)
	{
		return (0);
	}
	if (n % i == 0)
	{

		return (1);
	}
	return is_divisible(n, i + 1);
}

/**
 * is_prime_number - function to return 1 if the input integer is a prime number
 * otherwise return 0
 *
 * @n: parameter ti identify integer
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (!is_divisible(n, 2));
}

