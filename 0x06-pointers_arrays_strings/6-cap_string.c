#include "main.h"

/**
 * cap_string - that capitalizes all words of a string.
 * @s: pointer to the string
 *
 * Return: pointer to s
 */

char *cap_string(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}

		if (s[x] == ' ' || s[x] == '\t' || s[x] == '\n'
		|| s[x] == ',' || s[x] == ';' || s[x] == '.' || s[x] == '"' || s[x] == '!'
		|| s[x] == '?' || s[x] == '(' || s[x] == ')' || s[x] == '{'
		|| s[x] == '}')
		{
			if (s[x + 1] >= 97 && s[x + 1] <= 122)
			{
				s[x + 1] = s[x + 1] - 32;
			}
		}
	x++;
}
return (s);
}
