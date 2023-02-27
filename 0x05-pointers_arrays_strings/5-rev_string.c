#include "main.h"


/**
 * rev_string - function that reverses a string.
 * @s: parameter to the string,
 * that will be printed in reverse
 */

void rev_string(char *s)
{
	int length = 0, current_index = 0;

	char box;

	while (s[current_index++]){
        length++;
    }

	for (current_index = length - 1; current_index >= length / 2; current_index--)
	{
        box = s[current_index];
        s[current_index] = s[length - current_index - 1];
        s[length - current_index - 1] = box;
	}
}
