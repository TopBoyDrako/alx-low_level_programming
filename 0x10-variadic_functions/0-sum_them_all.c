#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Function that returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 * Return: 0 If n == 0
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list i;
	unsigned int p, sum = 0;

	va_start(i, n);

	for (p = 0; p < n; p++)
		sum += va_arg(i, int);

	va_end(i);

	return (sum);
}

