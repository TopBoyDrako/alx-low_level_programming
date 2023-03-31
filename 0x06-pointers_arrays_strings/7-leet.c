#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * @s: string pointer
 * Return: pointer to s
 */

char *leet(char *s)
{
	int i, l;
	char leetletters[] = "aAeEoOtTlL";
	char leetnum[] = "4433007711";

	i = 0;
	while (s[i] != '\0')
	{
		l = 0;

		while (l < 10)
		{
			if (leetletters[l] == s[i])
			{
				s[i] = leetnum[l];
			}
			l++;
		}
		i++;
	}
	return (s);
}
