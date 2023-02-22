/*
 * This is info about this file
 * Created By Ahmed Ramadan
 * ALX student
 * project 0x02. C - Functions, nested loops
 */

#include "main.h"

/**
 * times_table - will run program prints the 9 times table,
 * starting with 0.
 */

void times_table(void)

{

	int x, y, z, m, n;

	for (x = 0; x <= 9; x++)
	{
	for (y = 0; y <= 9; y++)
	{
	z = x * y;
	if (z > 9)
	{
	m = z % 10;
	n = (z - m) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(n + '0');
	_putchar(m + '0');
	}
	else
	{
	if (y != 0)
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	}
	_putchar(z + '0');
	}
	}
	_putchar('\n');
	}
}
