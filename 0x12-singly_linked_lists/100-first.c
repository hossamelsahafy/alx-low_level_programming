#include <stdio.h>
void __attribute__((constructor)) b_main();
/**
 * b_main -  function to  print before main function
 */

void b_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
