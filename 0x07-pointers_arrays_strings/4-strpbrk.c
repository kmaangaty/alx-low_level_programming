#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - function of type char that,
 * searches a string for any of a set of bytes.
 * @s: parameter to the pointer of test value.
 * @accept: parameter of type char.
 * Return: a pointer to the byte in @s that matches,
 * one of the bytes in @accept,
 * or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int mainIndex;
	int secIndex;

	for (mainIndex = 0; s[mainIndex] != '\0'; mainIndex++)
	{
		for (secIndex = 0; accept[secIndex] != '\0'; secIndex++)
		{
			if (s[mainIndex] == accept[secIndex])
				return (s + mainIndex);
		}
	}

	return (NULL);
}
