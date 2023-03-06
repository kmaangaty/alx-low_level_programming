#include "main.h"

/**
 * _memset -  function of type char,
 * that fills memory with a constant byte.
 * @s: pointer of unsigned area.
 * @b: constant byte.
 * @n: bytes of the memory area pointed to by @s.
 * Return: a pointer to the memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		s[index] = b;
	return (s);
}
