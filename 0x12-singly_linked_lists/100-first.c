#include <stdio.h>

/**
 * b_main -  function to  print before main function
 */

void b_main() __attribute__((constructor))
{
	printf("You're beat! and yet, you must allow,
			\nI bore my house upon my back!\n");
}
