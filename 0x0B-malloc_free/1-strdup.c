#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that returns a pointer to a
 * newly allocated space in memory
 * @str: pointer to char
 * Return: Always 0
 */

char *_strdup(char *str)
{
	int p = 0;
	   int n = 0;
	char *all;

	if (str == NULL)
		return (NULL);

	while (str[p] != '\0')
		p++;

	all = malloc(sizeof(char) * (p + 1));

	while (all == NULL)
		return (NULL);

	for (n = 0; str[n]; n++)
		all[n] = str[n];

	return (all);
}
