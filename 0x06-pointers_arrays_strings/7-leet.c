#include "main.h"

/**
  * leet - function that encodes a string into 1337.
  * @s: source string to be modify.
  * Return: modified string.
  */

char *leet(char *s)
{

	int source = 0;

	int index = 0;

	int length = 5;

	char encoder[5] = {'A', 'E', 'O', 'T', 'L'};

	char value[5] = {'4', '3', '0', '7', '1'};


	while (s[source])
	{

		while (index < length)
		{
			if (s[source] == encoder[index] || s[source] - 32 == encoder[index])
				s[source] = value[index];

			index++;
		}

		source++;
	}

	return (s);
}
