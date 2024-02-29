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

int interpolation_search(int *array, size_t size, int value);

int main() {
    int array[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    size_t size = sizeof(array) / sizeof(array[0]);
    int value = 50;
    
    int index = interpolation_search(array, size, value);
    
    if (index != -1) {
        printf("Value %d found at index %d\n", value, index);
    } else {
        printf("Value %d not found in the array\n", value);
    }
    
    return 0;
}

/* Interpolation search algorithm */
int interpolation_search(int *array, size_t size, int value) {
    if (array == NULL || size == 0) {
        return -1; /* Array is empty or NULL */
    }
    
    size_t low = 0;
    size_t high = size - 1;
    
    while (low <= high && value >= array[low] && value <= array[high]) {
        /* Calculate the probe position using interpolation formula */
        size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
        
        printf("Comparing value %d with array[%lu] = %d\n", value, (unsigned long)pos, array[pos]);
        
        if (array[pos] == value) {
            return pos; /* Found the value at position pos */
        } else if (array[pos] < value) {
            low = pos + 1; /* Adjust the lower bound */
        } else {
            high = pos - 1; /* Adjust the upper bound */
        }
    }
    
    return -1; /* Value not found in the array */
}
