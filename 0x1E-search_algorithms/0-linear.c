#include "search_algos.h"

/**
 * linear_search - This function searches for  lnear form in
 * array of ints using hte linear search algorithm
 * @array: array list
 * @size: size of the array
 * @value: value of the array
 *
 * Return: Alwats 0 on success
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	} return (-1);
}
