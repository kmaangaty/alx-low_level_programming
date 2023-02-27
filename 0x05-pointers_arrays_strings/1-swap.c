#include <stdio.h>

/**
 * swap_int - function that swaps the values of two integers.
 * @a: The first parameter that contains the to be swapped value.
 * @b: The second parameter that contains the to be swapped value .
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int box = *a;
	*a = *b;
	*b = box;
}
