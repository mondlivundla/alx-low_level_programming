#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers
 * @array: integer of arrays
 * @value: integer value
 * @size: size of array
 *
 * Return: -1 when successful.
 */
int linear_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1;
    }
    for (size_t i = 0; i < size; i++) {
        printf("Comparing %d with %d\n", array[i], value);
        if (array[i] == value) {
            return i;
        }
    }
    return -1;
}
