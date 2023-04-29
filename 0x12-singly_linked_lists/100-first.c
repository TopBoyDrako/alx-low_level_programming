#include <stdio.h>

void prince(void) __attribute__ ((constructor));

/**
 * prince - prints a sentence before the main
 * function is executed
 */

void prince(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
