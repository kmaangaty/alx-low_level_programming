#include "main.h"

/**
 * puts_half -  function of type void that prints,
 * half of a string followed by a new line.
 * @str: puts_half takes parameter of type string,
 * to run the method @str: will be the string to be printed.
 */

void puts_half(char *str) {

    int pointer = 0;

    int index;

    while (str[pointer] != '\0') {
        pointer++;
    }
    if (pointer % 2 == 1) {
        index = (pointer - 1) / 2;
        index += 1;
    } else {
        index = pointer / 2;
    }

    for (; index < pointer; index++) {
        _putchar(str[index]);
    }
    _putchar('\n');
}
