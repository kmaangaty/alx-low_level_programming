#include "main.h"


/**
 * more_numbers - function of type void that prints 10 lines of the numbers,
 * from 0 to 14, followed by a new line.
 * Return: 10 lines of the numbers from 0 to 14, followed by a new line.
 */

void more_numbers(void)
{

	int a, b;

	for (a = 0; a < 10; a++)
	{
	for (b = 0; b <= 14; b++)
	{
	if (b > 9)
	{
	_putchar((b / 10) + '0');
	}
	_putchar((b % 10) + '0');
	}
	_putchar('\n');
	}

}
