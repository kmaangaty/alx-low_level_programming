#include "main.h"

/**
  * _puts_recursion - function of type void,
  * that prints a string, followed by a new line.
  * @s: parameter of the string to pe printed.
  */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
