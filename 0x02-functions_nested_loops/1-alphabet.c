/*
 * This is info about this file
 * Created By Ahmed Ramadan
 * ALX student
 * project 0x02. C - Functions, nested loops
 */

#include "main.h"

/**
 * print_alphabet - will run program that prints the alphabet,
 * in lowercase,
 * followed by a new line.
 * Return: void
 */

void print_alphabet(void)

{

	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
