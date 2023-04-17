#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int f = 0;
	int digit = 0;



	while (s[c] != '\0')

		c++;

	while (a < c && f == 0)
	{

		if (s[a] == '-')

			++d;

		if (s[a] >= '0' && s[a] <= '9')

		{
			digit = s[a] - '0';

			if (d % 2)

				digit = -digit;

			b = b * 10 + digit;

			f = 1;

			if (s[a + 1] < '0' || s[a + 1] > '9')

				break;

			f = 0;

		}
		a++;
	}

	if (f == 0)
		return (0);


	return (b);

}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);

	num2 = _atoi(argv[2]);

	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
