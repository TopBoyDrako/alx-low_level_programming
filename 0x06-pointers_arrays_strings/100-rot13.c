#include "main.h"
#include <stdio.h>

/**
 * rot13 - function that encodes a string using rot13.
 * @str: the string to be encoded
 *
 * Return: to the encoded string
 */

char *rot13(char *str)
{
	int i, j;

	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	char data[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

		for (i = 0; str[i] != '\0'; i++)
		{
			for (j = 0; j < 52; j++)
			{
				if (str[i] == alphabet[j])
				{
					str[i] = data[j];
					break;
				}
			}
		}
		return (str);
}
