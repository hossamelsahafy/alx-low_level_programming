#include "main.h"
#include <string.h>
/**
 * rev_string - function to print string
 *
 * @s: parameter point to char
 */
void rev_string(char *s)
{
	int len;

	len = strlen(s);

	if (len > 1)
	{
		char tmp;

		tmp = s[0];
		s[0] = s[len - 1];
		s[len - 1] = '\0';
		rev_string(s + 1);
		s[len - 1] = tmp;
	}
}
