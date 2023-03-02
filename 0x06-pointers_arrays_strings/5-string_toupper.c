#include "main.h"

/**
 * string_toupper - function of type char,
 * that changes all lowercase letters of a string to uppercase.
 * @str: source string to be modify.
 * Return: modified string.
 */

char *string_toupper(char *str)
{

	int n = 0;

	while (str[n])
	{
		if (str[n] >= 'a' && str[n] <= 'z')
			str[n] -= 32;
	n++;

	}
	return (str);

}
