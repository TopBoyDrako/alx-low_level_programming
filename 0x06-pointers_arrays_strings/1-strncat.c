#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: - destination pointer
 * @src: source pointer
 * @n: number of bytes to be concatenated
 *
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, z;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (z = 0; z < n && src[z] != '\0'; z++, i++)
	{
		dest[i] = src[z];
	}
	dest[i] = '\0';
	return (dest);
}
