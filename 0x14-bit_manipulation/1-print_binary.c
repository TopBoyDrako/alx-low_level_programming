#include "main.h"

/**
 * print_binary - function that prints the binary rep of a number
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
	int p, num = 0;
	unsigned long int x;

	for (p = 50; p >= 0; p--)
	{
		x = n >> p;

		if (x & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	 if (!num)
		_putchar('0');
}

