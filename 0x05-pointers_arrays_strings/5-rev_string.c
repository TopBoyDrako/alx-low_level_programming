#include "main.h"

/**
 * rev_string - that reverses a string.
 * @s: pointer pointing to the string
 * Return: Always 0
 */

void rev_string(char *s)
{
	int l, a, h;
	char sch;

	for (l = 0; s[l] != '\0'; l++)
		;
	a = 0;
	h = l / 2;

	while (h--)
	{
		sch = s[l - a - 1];
		s[l - a - 1] = s[a];
		s[a] = sch;
		a++;
	}
}
