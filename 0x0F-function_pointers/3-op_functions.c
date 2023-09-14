#include "3-clac.h"
#include <stdio.h>

/**
 * op_add- function to sum 2 integers
 *
 * @a: parameter to identify integer
 *
 * @b: parameter to identify integer
 *
 * Return will be a + b
 */

int op_add(int a, int b)
{
	return (a + b);
	break;
}

/**
 * op_sub - function to sperate 2 integers
 *
 * @a: parameter to identify integer
 *
 * @b: parameter to identify integer
 *
 * Return: will be a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
	break;
}
/**
 * op_mul - function to multiplay 2 integers
 *
 * @a: parameter to identify integer
 *
 * @b: parameter to identify integer
 *
 * Return: will be a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
	break;
}

/**
 * op_div - function to divide 2 integers
 *
 * @a: parameter to identify integer
 *
 * @b: parameter to identify integer
 *
 * Return: if b == 0 it will return 100
 * otherwise it will a / b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}
	return (a / b);
	break;
}

/**
 * op_div - function to divide 2 integers
 *
 * @a: parameter to identify integer
 *
 * @b: parameter to identify integer
 *
 * Return: if b == 0 it will return 100
 * otherwise it will a / b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	return (a % b);
	break;
}
