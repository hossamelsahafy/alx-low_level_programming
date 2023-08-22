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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign = -1;
		}
		else if (s[i] == '+')
		{
			sign = 1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
			if (sign == 0)
			{
				sign = 1;
			}
		}
		else
		{
			break;
		}
	}
	return (result * sign);

}
