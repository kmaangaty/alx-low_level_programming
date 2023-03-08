#include "main.h"

/**
  * _print_rev_recursion - function of type void,
  * that prints a string in reverse.
  * @s: parameter of the string to pe printed.
  */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
