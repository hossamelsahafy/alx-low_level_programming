#include "main.h"
/**
 * print_to_98 -  to print numbers from n to 98
 *
 * Description: print nubers from n to 98
 *
 * _putchar: prints the target
 *
 * @n: to identify numbers
 *
 */
void print_to_98(int n)
{
	int b;

	if (n < 98)
	{
		for (b = 0; b < 98; b++)
			printf("%d, ", b);
			printf("%d \n");
	}
	else
	{
		if (n > 98)
		{
			for (b = 0; b > 98; b--)
				printf("%d, ", b);

		}
	}

}
