#include "main.h"

/**
 * print_diagonal - function of type void that,
 * draws a diagonal line on the terminal.
 * @n: parameter to define how many lines.
 * Return: empty
 */

void print_diagonal(int n)

{

	int a, b;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (a = 0; a < n; a++)
	{
	for (b = 0; b < a; b++)
	{
	_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}
