#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - function of type int that,
 * adds positive numbers.
 * @argc : parameter to indicate the arguments.
 * @argv : parameter to indicate the arguments vector.
 * Return: return 0.
 */
int main(int argc, char *argv[])
{
	int to_add;
    int x;
    int y;

    to_add = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");
				return (1);
			}
		}
        to_add += atoi(argv[x]);
	}
	printf("%d\n", to_add);
	return (0);
}
