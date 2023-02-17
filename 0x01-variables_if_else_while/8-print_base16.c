/*
 *8-print_base16.c
 */
#include <stdio.h>
/**
 * program that prints all the numbers of base 16 in lowercase, followed by a new line.
 */
int main(void)
{
	int num;
	char letter;
	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}

