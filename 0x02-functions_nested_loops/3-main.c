/*
 * This is info about this file
 * Created By Ahmed Ramadan
 * ALX student
 * project 0x02. C - Functions, nested loops
 */

#include "main.h"

/**
 * main - will run program that prints the last digit of a number.
 * Return: 0 since it void.
 */

int main(void)
{
	    int r;

	    print_last_digit(98);
	    print_last_digit(0);
	    r = print_last_digit(-1024);
	    _putchar('0' + r);
	    _putchar('\n');
	    return (0);
}