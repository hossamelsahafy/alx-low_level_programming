#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point 
 *
 * Return: always 0
 */

#define PASSWORD_LENGTH 12

int main(void)
{
	char c;
	int i;

	srand(time(NULL));
	for (i = 0; i < 2772; i += c)
	{
		c = rand() % 128;
		if ((i + c) > 2772)
			break;
		putchar ('c');
	}
	printf("%c", 2772 - i)
	return (0);

}
