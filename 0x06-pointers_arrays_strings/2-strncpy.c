#include "main.h"

/**
 * _strncpy - of type char function that copies a string.
 * @dest : storing a  copy of the string.
 * @src : source string.
 * @n : The max length of bytes to be copied from the source.
 * Return: result value of copy process.
 */

char *_strncpy(char *dest, char *src, int n)

{

	int index = 0;
	int source_length = 0;

	while (src[index++])
		source_length++;

	for (index  = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = source_length; index < n; index++)
		dest[index] = '\0';

	return (dest);

}
