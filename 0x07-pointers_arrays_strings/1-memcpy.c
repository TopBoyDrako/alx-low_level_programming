#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: pointer to a char
 * @src: memory area
 * @n: amount of function copies
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
	}
	return (dest);
}
