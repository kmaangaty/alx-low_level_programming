#include "main.h"

/**
  * _pow_recursion - function of type int that of type int,
  * returns the value of @x raised to the power of @y.
  * @x: parameter that indicate the raised value.
  * @y: parameter that indicate the time to raised @x.
  * * Return: int -> pow recursion of @x.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
