#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: parameter of the string to be measured.
 * Return: the length of a string.
 */
int _strlen(char *s)

{
	int strLength = 0;

	while (*s != '\0')
	{
		s++;
		strLength++;
	}
	return (strLength);

}
