#include "main.h"

/**
  * factorial - function of type int,
  * that returns the factorial of a given number.
  * @n: parameter of type int to get the factorial.
  * Return: int -> factorial of @n.
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
