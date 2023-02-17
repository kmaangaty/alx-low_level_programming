/*
 * 4-print_alphabt.c
 */

#include <stdio.h>

/**
 *  main - program that prints the alphabet in lowercase,
 *  followed by a new line.
 * Return: 0 for the main function.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
