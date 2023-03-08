#include "main.h"

int _sqrt(int n, int i);

/**
  * _sqrt_recursion - function of type int that,
  * returns the natural square root of a number.
  * @n: parameter to calculate the square root on it.
  * Return: square root of @n.
  */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
  * _sqrt - calculates square root from passed _sqrt_recursion.
  * @n: number to calculate the square root
  * @i: number of iteration.
  * Return: the square root of @n.
  */

int _sqrt(int n, int i)
{
	int num = i * i;

	if (num > n)
		return (-1);

	if (num == n)
		return (i);
	return (_sqrt(n, i + 1));
}
