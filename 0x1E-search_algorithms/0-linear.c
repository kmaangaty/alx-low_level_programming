#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * linear_search - function that searches for a value in an array
 * of integers using the Linear search algorithm
 *
 * @array: parameter of type int
 * @size: parameter of type struct
 * @value: parameter of type int
 *
 * Return: index or -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t x = 0;

	if (!array || size == 0)
		return (-1);

	while (x < size)
	{
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
		x++;
	}

	return (-1);
}
