#include <stdio.h>

/**
 * main - function to print the number of arguments passed into it
 *
 * @argc: parameter to idetify integer
 *
 * @argv: parameter point to char
 *
 * Return: will be 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
