#include "main.h"

/**
 * print_alphabet will run that prints the alphabet,
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
