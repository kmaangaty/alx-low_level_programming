/*
 *3-print_alphabets.c
 */

#include <stdio.h>

/**
 * program that prints the alphabet in lowercase, followed by a new line.
 *
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
