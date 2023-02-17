/*
 *  program that prints the alphabet in lowercase,
 * followed by a new line.
 * main - the entry point
 * Return: 0 for the main function.
 */
#include <stdio.h>

/*
 * main - entry point
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
