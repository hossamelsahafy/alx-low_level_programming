#include <stdio.h>

/**
 * binary_to_uint - function to convert a binary
 * number to an unsigned int
 *
 * @b: parameter point to const char
 *
 * Returrn: if b or *b == NULL it will return 0
 * otherwise n
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i = 0;

	if (b == NULL || *b == '\0')
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			n = n << 1;
			n = n + b[i] - '0';
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (n);
}
