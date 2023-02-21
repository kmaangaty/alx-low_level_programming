/*
 * This is info about this file
 * Created By Ahmed Ramadan
 * ALX student
 * project 0x02. C - Functions, nested loops
 */

#include "main.h"

/**
 * _islower - will run program that checks for lowercase character.
 * @c: is the parameter to be checked
 * Return: 1 if upper and 0 if lower or any other data type
 */
int _islower(int c)

{

	if (c >= 97 && c <= 122)
	{

	return (1);
	}
	return (0);
}
