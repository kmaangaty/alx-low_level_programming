#include "main.h"

/**
 * print_chessboard - function of type void that,
 * prints the chessboard.
 * @a: pointer to the array.
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
	int rowIndex;
	int colIndex;

	for (rowIndex = 0; rowIndex < 8; rowIndex++)
	{
		for (colIndex = 0; colIndex < 8; colIndex++)
			_putchar(a[rowIndex][colIndex]);
		_putchar('\n');
	}
}
