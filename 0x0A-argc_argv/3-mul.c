#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to print the result of the
 * multiplication, followed by a new line
 *
 * @argc: parameter to identify integer
 *
 * @argv: parameter point to char
 *
 * Return: if argc != 3 it will be 1 otherwise 0
 */
int main(int argc, char *argv[])
{
	int result;
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = a * b;
		printf("%d\n", result);
		return (0);
	}
}
