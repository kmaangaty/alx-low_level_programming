#include "main.h"

/**
 * reverse_array - function of type void that reverses
 * the content of an array of integers.
 * @a: source array.
 * @n: index in the array.
 */

void reverse_array(int *a, int n)
{

	int value = 0;

	int index = 0;

	for (index = n - 1; index >= n / 2; index--)
	{

		value = a[n - 1 - index];

		a[n - 1 - index] = a[index];

		a[index] = value;

	}

}
