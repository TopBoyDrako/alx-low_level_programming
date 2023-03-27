#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: The first value to be swapped
 * @b: The second value to be swapped
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{

	int n;

	n = *b;
	*b = *a;
	*a = n;
}
