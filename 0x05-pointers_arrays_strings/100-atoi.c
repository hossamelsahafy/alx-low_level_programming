#include "main.h"
/**
 * _atoi - function to convert string into integer
 *
 * @s: parameter point to char array
 *
 * Return: result of multiplying sign & result
 */

int _atoi(char *s)
{
	int sign;
	int result;
	int started;

	sign = 1;
	result = 0;
	started = 0;
	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign = -sign;
			started = 1;
		}
		else if (*s >= '0' && *s <= 9)
		{
			result = result * 10 + (*s - '0');
			started = 1;
		}
		else if (started)
		{
			break;
		}
		s++;
	}
	return (sign * result);


}
