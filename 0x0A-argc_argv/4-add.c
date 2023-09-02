#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - function to add positive numbers
 *
 * @argc: parameter to identify integer
 *
 * @argv: parameter point to argv
 *
 * Return: if argc == 1 it will return 0
 * if (!isdigit(argv[i][j])) it will return 1
 * other wise 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			sum = sum + (atoi(argv[i]));
		}
		printf("%d\n", sum);
	}
	return (0);
}
