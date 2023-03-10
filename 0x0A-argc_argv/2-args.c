#include <stdio.h>
#include <stdlib.h>
/**
 * main - function of type int that,
 * prints all arguments it receives.
 * @argc : parameter to indicate the arguments.
 * @argv : parameter to indicate the arguments vector.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int p_index;

	for (p_index = 0; p_index < argc; p_index++)
	{
		printf("%s\n", argv[p_index]);
	}

	return (0);
}
