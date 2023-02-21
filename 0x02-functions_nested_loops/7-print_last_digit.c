/*
 * This is info about this file
 * Created By Ahmed Ramadan
 * ALX student
 * project 0x02. C - Functions, nested loops
 */

#include "main.h"

/**
 * print_last_digit - will run program that prints the last digit of a number.
 * @x: is the parameter to be checked and run the function;
 * Return: the last digit of a number.
 */

int print_last_digit(int x)

{

	int l;

	l = x % 10;
	if (l < 0)
	{
		l = l * -1;
	}
	_putchar(l + '0');
	return (l);
}
