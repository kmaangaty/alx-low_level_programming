#include <stdio.h>
#include <stdlib.h>
/**
 * main - function of type int that,
 * multiplies two numbers.
 * @argc : parameter to indicate the arguments.
 * @argv : parameter to indicate the arguments value.
 * Return: return 0.
 */
int main(int argc, char *argv[])
{
	int x;
	int y;
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);

	i = x * y;

	printf("%d\n", i);

	return (0);
}
