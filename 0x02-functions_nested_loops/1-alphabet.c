#include "main.h"

/**
 * print_alphabet - will run program that prints the alphabet,
 * 1-alphapet.c - file,
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
