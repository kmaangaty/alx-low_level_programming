#include "main.h"


/**
  * _strlen_recursion - function of type int,
  * that returns the length of a string.
  * @s: parameter contains the string that wanted to measured.
  * Return: length of @s value.
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
