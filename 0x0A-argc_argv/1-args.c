#include <stdio.h>

/**
 * main - function to print the number of arguments passed into it
 *
 * @argc: parameter to idetify integer
 *
 * @argv: parameter point to char
 *
 * Return: will be 0
 *
 * Description: void is for that unused *argv[]
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%i\n", argc - 1);
	return (0);
}
