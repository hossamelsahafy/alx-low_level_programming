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
	int cents;
	int coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[i]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	coins = coins + cents / 25;
	cents = cents % 25;
	coins = coins + cents / 10;
	coins = coins % 10;
	coins = coins + cents / 5;
	cents = cents % 5;
	coins = coins + cents / 2;
	cents = cents % 2;
	coins = coins + centes;
	printf("%d\n", coins);
	return (0);
}



