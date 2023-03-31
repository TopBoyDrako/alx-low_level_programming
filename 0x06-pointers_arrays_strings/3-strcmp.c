#include "main.h"

/**
 * _strcmp -  function that compares two strings.
 * @s1: first string pointer
 * @s2: second string pointer
 *
 * Return: a value equal to, less than or greater than 0
 * depending on the outcome of the string
 */

int _strcmp(char *s1, char *s2)
{
	int n, c;

	n = 0;
       	while (s1[n] == s2[n] && s1[n] != '\0')
	{
		n++;
	}

	c = s1[n] - s2[n];

	return (c);

}

