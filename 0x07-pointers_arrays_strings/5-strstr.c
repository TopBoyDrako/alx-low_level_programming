#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @needle: string to be located
 * @haystack: here we find the string
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{

		while (*haystack == *needle && *needle != '\0')
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);
	}
	return (0);
}

