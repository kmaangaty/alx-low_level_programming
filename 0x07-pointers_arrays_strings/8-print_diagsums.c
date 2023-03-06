#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - function of type void that,
 * prints the sum of the two diagonals,
 * of a square matrix of integers.
 * @a: parameter of the first diag.
 * @size: parameter of the second diag.
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int xLooper;
	int yLooper;
	int firstDiag = 0;
	int secDiag = 0;

	for (xLooper = 0; xLooper <= (size * size); xLooper = xLooper + size + 1)
		firstDiag = firstDiag + a[xLooper];

	for (
		yLooper = size - 1;
		 yLooper <= (size * size) - size;
		 yLooper = yLooper + size - 1
	)
		secDiag = secDiag + a[yLooper];
	printf("%d, %d\n", firstDiag, secDiag);
}
