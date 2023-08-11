#include <stdio.h>
#include <unistd.h>
#define  SENTENCE "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"
/**
 * main - entry point that run the code
 *
 * Description: print without printf command
 *
 * Return: 1 Always
 */
int main(void)
{
	char buffer[] = SENTENCE;
	int len = 59;

	write(2, buffer, len);
return (1);
}
