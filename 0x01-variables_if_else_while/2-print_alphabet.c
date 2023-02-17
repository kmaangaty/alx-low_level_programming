/*
 *  program that prints the alphabet in lowercase, followed by a new line
 */

#include <stdio.h>


int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
