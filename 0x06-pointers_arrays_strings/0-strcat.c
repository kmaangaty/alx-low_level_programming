#include <stdio.h>

/**
 * _strcat - function that concatenates two strings.
 * @dest: destination string.
 * @src: source string.
 * Return: result value of concatenation.
 */

char *_strcat(char *dest, char *src)
{
	int length = 0;
	int index;

	while (dest[length])
		length++;


	for (index = 0; src[index] != 0; index++)
	{
		dest[index] = src[index];
		length++;
	}

	dest[length] = '\0';
	return (dest);
}
