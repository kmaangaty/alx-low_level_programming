/*
 *7-print_tebahpla.c
 */

#include <stdio.h>

/**
 * main - program that prints the lowercase alphabet in reverse,
 * followed by a new line.
 * Return: 0 for the main function.
*/

int main(void)
{

	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)

		putchar(letter);

	putchar('\n');

	return (0);
}
