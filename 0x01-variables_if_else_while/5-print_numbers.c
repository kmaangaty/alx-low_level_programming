/*
 * 5-print_numbers.c
 */

#include <stdio.h>

/**
 * main - program that prints all single digit numbers
 * of base 10 starting from 0, followed by a new line.
 * Return: 0 for the main function.
*/

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)

		printf("%d", num);

	printf("\n");

	return (0);
}
