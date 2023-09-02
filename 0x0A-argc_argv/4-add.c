#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to add positive numbers
 *
 * @argc: parameter to identify integer
 *
 * @argv: parameter point to argv
 *
 * Return: if the umber is bot digit it will return 1
 * otherwise 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
