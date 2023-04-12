#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars, and
 * initializes it with a specific char
 * @size: size of the array
 * @c: assigned to the array of cjars
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *p;

	p = malloc(sizeof(char) * size);
	for (n = 0; n < size; n++)
		p[n] = c;
	return (p);

	if (size == 0 || p == NULL)
		return (NULL);
}
