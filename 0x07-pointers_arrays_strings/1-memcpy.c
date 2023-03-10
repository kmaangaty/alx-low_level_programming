#include "main.h"

/**
 * _memcpy - function of type char that,
 * copies memory area.
 * @dest: @src to memory area @dest.
 * @src: source.
 * @n: bytes from memory area @src
 * Return: return pointer to @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		dest[index] = src[index];

	return (dest);
}
