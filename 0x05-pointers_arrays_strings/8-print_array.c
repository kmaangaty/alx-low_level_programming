#include "main.h"
#include <stdio.h>

/**
 * print_array - function of type void,
 * that prints n elements of an array of integers,
 * followed by a new line.
 * @a: array of integers
 * @n: number of the array elements.
 */

void print_array(int *a, int n) {

    int index = 0;

    for (; index < n; index++) {
        printf("%d", a[index]);
        if (index != (n - 1)) {
            printf(", ");
        }
    }
    printf("\n");
}
