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

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
			result = result * 10 + s[i] - '0';
		if (result != 0 && !(s[i] >= '0' && s[i] <= '9'))
			break;
		i++;
	}
	return (result * sign);

}
