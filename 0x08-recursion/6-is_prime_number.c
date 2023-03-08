#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number -  function of type void that,
 * returns 1 if the input integer is a prime number,
 * otherwise return 0.
 * @n: parameter of the number to get the sqrt.
 * Return: 1 prime , 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime -  function of type void that,
 * returns 1 if the input integer is a prime number,
 * otherwise return 0.
 * @n: parameter of the number to get the sqrt.
 * @i: number of iteration.
 * Return: 1 prime , 0 if not
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
