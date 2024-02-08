#include "search_algos.h"

/**
  * binary_search - function that searches for a value in a
  * sorted array of integers using the Binary search algorithm
  *
  * @array: parameter of type int
  * @size: parameter of type struct
  * @value: parameter of type int
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: print the array being searched every time it changes.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t x;
    size_t lt;
    size_t rt;

	if (array == NULL)
		return (-1);

	for (lt = 0, rt = size - 1; rt >= lt;)
	{
		printf("Searching in array: ");
		for (x = lt; x < rt; x++)
			printf("%d, ", array[x]);
		printf("%d\n", array[x]);

		x = lt + (rt - lt) / 2;
		if (array[x] == value)
			return (x);
		if (array[x] > value)
            rt = x - 1;
		else
            lt = x + 1;
	}
	return (-1);
}
