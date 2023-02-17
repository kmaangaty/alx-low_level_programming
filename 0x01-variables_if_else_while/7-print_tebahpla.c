/*
 *7-print_tebahpla.c
 */

#include <stdio.h>

/**
 * program that prints the lowercase alphabet in reverse, followed by a new line.
 */
int main(void)
{
	char letter;
	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');
	return (0);
}
