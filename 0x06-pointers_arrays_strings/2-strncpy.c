#include "main.h"

/**
 * _strncpy -  function that copies a string.
 * @dest: destination for string pointer
 * @src: source for string pointer
 * @n: number of bytes to be used
 *
 * Return: pointer to destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0; c < n && src[c] != '\0'; c++)
		dest[c] = src[c];
	for (; c < n; c++)
		dest[c] = '\0';

	return (dest);
}
