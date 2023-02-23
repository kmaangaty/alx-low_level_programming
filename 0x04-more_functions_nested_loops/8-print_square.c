#include "main.h"

/**
 * print_square - function of type void that,
 * prints a square, followed by a new line.
 * @size: size is the size of the square
 * Return: If size is 0 or less, the function,
 * should print only a new line.
 */
void print_square(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
