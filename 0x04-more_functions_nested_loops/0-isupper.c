#include "main.h"

/**
 * _isupper - checks the passed parameter if uppercase char
 * @c: The parameter to be checked
 * Return: 1 if char and uppercase or 0 for anything else
 */

int _isupper(int c)

{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
		return (0);
}
