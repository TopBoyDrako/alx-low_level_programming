#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of
 * integers using the Interpolation search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */

int interpolation_search(int *array, size_t size, int value) {
    size_t low, high, pos;

    if (array == NULL || size == 0) {
        return -1;
    }

    low = 0;
    high = size - 1;

    while (low <= high && value >= array[low] && value <= array[high]) {
        pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

        printf("Comparing value %d with array[%lu] = %d\n", value, (unsigned long)pos, array[pos]);

        if (array[pos] == value) {
            return pos;
        } else if (array[pos] < value) {
            low = pos + 1;
        } else {
            high = pos - 1;
        }
    }

    return -1;
}

int main(void) {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    size_t size = sizeof(array) / sizeof(array[0]);
    int value = 3;
    int index;

    printf("Searching for %d in the array\n", value);
    index = interpolation_search(array, size, value);
    if (index != -1) {
        printf("Found %d at index: %d\n", value, index);
    } else {
        printf("%d not found in the array\n", value);
    }

    return 0;
}
