#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a
 * 2 dimensional array of integers.
 * @width: input
 * @height: input
 * Return: pointer to a 2 dimensional array of integers and
 * NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int p, n;
	int **alc;

	if (width <= 0 || height <= 0)
		return (NULL);

	alc = malloc(sizeof(int *) * height);

	while (alc == NULL)
		return (NULL);

	for (p = 0; p < height; p++)
	{
		alc[p] = malloc(sizeof(int) * width);

		if (alc[p] == NULL)
		{
			for (; p >= 0; p--)
				free(alc[p]);

			free(alc);
			return (NULL);
		}
	}

	for (p = 0; p < height; p++)
	{
		for (n = 0; n < width; n++)
			alc[p][n] = 0;
	}
	return (alc);
}
