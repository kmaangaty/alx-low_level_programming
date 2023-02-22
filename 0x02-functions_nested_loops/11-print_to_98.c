/*
 * This is info about this file
 * Created By Ahmed Ramadan
 * ALX student
 * project 0x02. C - Functions, nested loops
 */

#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - will run program that prints all natural,
 * numbers from n to 98, followed by a new line.
 * @x: the entry point and the number thea will start the loop,
 * and checkers aslo will be printed.
 */

void print_to_98(int x)

{

	if (x <= 98)
	{
	for (; x <= 98; x++)
	{
	if (x == 98)
	{
	printf("%d", x);
	printf("\n");
	break;
	}
	else
	{
	printf("%d, ", x);
	}
	}
	}
	else
	{
	for (; x >= 98; x--)
	{
	if (x == 98)
	{
	printf("%d", x);
	printf("\n");
	break;
	}
	else
	{
	printf("%d, ", x);
	}
	}
	}
}
