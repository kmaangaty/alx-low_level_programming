#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 * @n: The number to be checked
 * Return: function will return 1 if the passed parameter isDigit
 * or will return 0 for any other data type or value
 */

int _isdigit(int n)

{

	if (n >= 48 && n <= 57)
	{
	return (1);
	}
	return (0);
}
