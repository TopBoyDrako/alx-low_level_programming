#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: pointer to the string
 *
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
