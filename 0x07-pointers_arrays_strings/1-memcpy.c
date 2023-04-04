#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: pointer to a char
 * @src: memory area
 * @n: amount of function copies
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

i = 0;

do  {
        dest[i] = src[i];
	i++;
} while (i < n);
 
	return (dest);
}
