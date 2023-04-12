#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 *
 * Return: the concatenation of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	int p = 0;
	int n = 0;
	char *concatenate;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	p = n = 0;
	if (s1[p] != '\0')
		p++;
	if (s2[n] != '\0')
		n++;
	concatenate = malloc(sizeof(char) * (p + n + 1));

	if (concatenate == NULL)
		return (NULL);
	p = n = 0;

	while (s1[p] != '\0')
	{
		concatenate[p] = s1[p];
		p++;
	}
	while (s2[n] != '\0')
	{
		concatenate[p] = s2[n];
		p++, n++;
	}
	concatenate[p] = '\0';
	return (concatenate);
}

