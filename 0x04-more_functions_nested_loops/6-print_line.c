#include "main.h"

/**
 * print_line - function of type void that
 * draws a straight line in the terminal.
 * @n: The number of lines to be drawn.
 * Return: straight line.
 */

void print_line(int n)

{

	int i;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 0; i < n; i++)
	{
	_putchar(95);
	}
	_putchar('\n');
	}
}
