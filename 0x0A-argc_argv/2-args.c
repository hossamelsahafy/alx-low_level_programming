#include <stdio.h>

/**
 * main - program to print all arguments it receives
 *
 * @argc: parameter to identify integer
 *
 * @argv: parameter point to char
 *
 * Return: will be 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
