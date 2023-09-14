#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to contain main function only
 *
 * @argc: parameter to identify integer
 *
 * @argv: parameter point to char
 *
 * Return: if argc != 4 it will return 98
 * if op_func == NULL it will return 99
 * if n2 == 0 it will return 100
 * otherwise 0
 */
int main(int argc, char **argv)
{
	int (*op_func)(int, int);
	int n1, n2, result;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	op_func = get_op_func(argv[2]);

	if (op_func == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		return (99);
	}
	if ((op_func == op_div || op_func == op_mod) && n2 == 0)
	{
		printf("Error\n");
		return (100);
	}
	result = op_func(n1 , n2);
	printf("%d\n", result);
	return (0);
}
