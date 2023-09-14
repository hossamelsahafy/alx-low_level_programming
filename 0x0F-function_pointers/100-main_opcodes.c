#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - function to take the number of bytes to print
 *
 * @func: parameter point to function
 *
 * @size: parameter to identify size
 */

void print_opcodes(void *func, size_t size)
{
	unsigned char *p = (unsigned char *)func;

	for (size_t i = 0; i < size; i++)
	{
		printf("%02x", p[i]);
	}
	printf("\n");
}

/**
 * main - function to check that the correct number of arguments were passed in
 *
 * @argc: parameter that point to integer
 *
 * @argv: parameter that point to char
 *
 * Return: if size <= 0 it will be 2
 * if argc !=2 it will be one otherwise 0
 */

int main(int argc, char **argv)
{
	int size;

	if (argc != 2)
	{
		printf("Error\n");
		return 1;
	}
	size = atoi(argv[1]);
	if (size <= 0)
	{
		printf("Error\n");
		return 2;
	}
	print_opcodes(main, size);
	return 0;
}
