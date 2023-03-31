#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @n: number of elements in an array
 * @a: pointer to array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, c;

	n = n - 1;
	c = 0;
	while (c <= n)
	{
		i = a[c];
		a[c++] = a[n];
		a[n--] = i;
	}
}
