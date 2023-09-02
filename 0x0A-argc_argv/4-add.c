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
	int num;

	for (i = 0; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (num > 0 && num != 0)
		{
			sum = sum + num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
