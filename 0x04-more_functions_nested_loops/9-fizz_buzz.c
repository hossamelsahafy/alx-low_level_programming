#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 *
 * Description: print fizzbuzz if there is nor remaining
 * of the number while deviding it on 3 or 5
 * if there is no remaining of dividing the number on 3
 * so it will print fizz if there was no remaing while dividing it
 * on 5 so it will print buzz
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d ", i);
		}
	}
	 printf("\n");
return (0);
}
