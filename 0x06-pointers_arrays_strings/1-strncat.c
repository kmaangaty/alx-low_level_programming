#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: pointer to the resulting string.
 * @src: does not need to be null-terminated
 * if it contains n or more bytes.
 * @n: bytes from src.
 * Return: result value of concatenation.
 */

char *_strncat(char *dest, char *src, int n)
{

	int index = 0;

	int length = 0;

	while (dest[index++])
		length++;

	for (index = 0; src[index] && index < n; index++)
		dest[length++] = src[index];

	return (dest);

}
