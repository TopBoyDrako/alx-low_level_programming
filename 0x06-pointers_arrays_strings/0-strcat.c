#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: destination for the string pointer
 * @src: source of the string pointer
 *
 * Return: pointer to destination string
 */

char *_strcat(char *dest, char *src)
{

	int i, n;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (n = 0; src[n] != '\0'; n++, i++)
	{
		dest[i] = src[n];
	}
	dest[i] = '\0';
	return (dest);
}
