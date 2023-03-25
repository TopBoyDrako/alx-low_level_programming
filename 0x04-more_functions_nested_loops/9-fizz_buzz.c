#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * Fizz-Buzz test: prints the numbers from 1 to 100
 * for multiples of three print Fizz instead of the number
 * for the multiples of five print Buzz
 * multiples of both three and five print FizzBuzz.
 *
 * Return: Always 0
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0)
			printf("Fizz");
		else if (a % 5 == 0)
			printf("Buzz");
		else if (a % 15 == 0)
			printf("FizzBuzz");
		else
			printf("%a", a);
		if (a < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
