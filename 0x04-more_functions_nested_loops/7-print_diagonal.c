#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times the character \ should be printed
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
		_putchar('\n');
	for (a = 0; a < n; a++)
	{
	for (b = 0; b < a; b++)
	{
		_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
}
