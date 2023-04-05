#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: get the length of the string s
 * @accept: prefix substring
 * Return:  the number of bytes in the initial segment of
 * s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int length;

	while (*s)
	{
	for (length = 0; accept[length]; length++)
	{
		if (*s == accept[length])
		{
			i++;
			break;
		}
		else if (accept[length + 1] == '\0')
			return (i);
	}
	s++;
	}
	return (i);
}
