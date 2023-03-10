#include <stdio.h>
#include <stdlib.h>
/**
 * main - function of type int that,
 * that prints the number of arguments passed into it.
 * @argc : parameter to indicate the arguments.
 * @argv : parameter to indicate the arguments vector.
 * Return: 0.
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
