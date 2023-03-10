#include <unistd.h>

/**
 * _putchar - function of type int.
 * @c: parameter to print
 * Return: 1 if fine or -1 if error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
