#include <stdio.h>
#include <stdlib.h>

/**
 * main - that prints the minimum number of coins to
 * make change for an amount of money
 *
 * @argc: parameter to identify integer
 *
 * @argv: parameter point to char
 *
 * Return: if argc != 2 it will be 1 otherwise 0
 */
int main(int argc, char *argv[])
{
	int i;
	int cents;
	int coins[] = {25, 10, 5, 2, 1};
	int size = sizeof(coins) / sizeof(int);
	int n_coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	n_coins = 0;
	for (i = 0; i < size; i++)
	{
		n_coins = n_coins + (cents / coins[i]);
		cents = cents % coins[i];
	}
	printf("%d\n", n_coins);
	return (0);
}
