#include <stdio.h>

/**
 * main - function to print its name, followed by a new line
 *
 * @argc: parameter to identfy integer
 *
 * @argv: parameter point to char
 *
 * Return: will be 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
