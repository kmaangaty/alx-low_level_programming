#include "main.h"

/**
 * puts2 - function that prints every other,
 * character of a string, starting with the first character,
 * followed by a new line.
 * @str: I/O parameter to the string to be tested.
 */

void puts2(char *str)

{

	int pointer = 0;
    int index = 0;

	while (str[pointer] != '\0')
	{
        pointer++;
	}

	for (; index < pointer; index += 2)
	{
	    _putchar(str[index]);
	}

	_putchar('\n');
}
