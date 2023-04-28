#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int p = 0;
	char *str, *alx = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[p])
		{
			switch (format[p])
			{
				case 'c':
					printf("%s%c", alx, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", alx, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", alx, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", alx, str);
					break;
				default:
					p++;
					continue;
			}
			alx = ", ";
			p++;
		}
	}

	printf("\n");
	va_end(list);
}
