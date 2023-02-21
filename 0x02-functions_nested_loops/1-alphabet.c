#include "main.h"
/*
 * 1-alphabet.c This is info about this file
 * Created By Ahmed Ramadan
 * ALX student
 * project 0x02. C - Functions, nested loops
 */

/**
 * print_alphabet will run that prints the alphabet
 * in lowercase,
 * followed by a new line.
 * Return: print_alphabet will always 0
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
