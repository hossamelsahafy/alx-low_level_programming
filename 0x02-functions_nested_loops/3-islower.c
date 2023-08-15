#include <stdio.h>
#include "main.h"
/**
 * _islower - to check the lower character
 * _putchar: print the target
 * @c: character to check
 * Description: checking for the lower chracter
 * Return: 1 if c is lower case 0 otherwise
 */

int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
	{
		_putchar(c);
		return (1);
	}
	else
	{
		return (0);
	}
int main(void)
{
	char c = 'A';
	printf("%c is lowercase: %d\n", c, _islower(c));
	c = 'a';
	printf("%c is lowercase: %d\n", c, _islower(c));
	return 0;
}
}

_putchar('\n');

}
