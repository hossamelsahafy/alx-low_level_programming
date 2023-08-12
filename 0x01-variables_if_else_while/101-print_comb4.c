#include <stdio.h>
/**
 * main - this function to start coding
 *
 * Deiscription: print some numbers with commas  except
 *
 * putchar: to print the target
 *
 *Return: 0 Always
 */

int main(void)
{
	int i, j, g;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (g = j + 1; g < 10; g++)
			{
				putchar (i + '0');
				putchar (j + '0');
				putchar (g + '0');
				if (i != 7 || j != 8 || g != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar ('\n');
return (0);
}
