#include <stdio.h>
#include "main.h"

/**
 * _strstr - function of type char,
 * that locates a substring.
 * @haystack: parameter to the string.
 * @needle: parameter to match the main string.
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *mainIndex = haystack;
		char *subIndex = needle;

		while (*mainIndex == *subIndex && *subIndex != '\0')
		{
			mainIndex++;
			subIndex++;
		}

		if (*subIndex == '\0')
			return (haystack);
	}

	return (NULL);
}
