/*
 * This is info about this file
 * Created By Ahmed Ramadan
 * ALX student
 * project 0x02. C - Functions, nested loops
 */

#include "main.h"

/**
 * print_alphabet_x10 - will run program that prints the alphabet,
 * 1-alphapet.c - file,
 * in lowercase,
 * followed by a new line.
 * Return: void
 */
 
 void print_alphabet_x10(void)

{
	char c;
 
	int x = 0;
 
	while (x <= 9)
 
	{
 
	for (c = 'a'; c <= 'z'; c++)
 
	{
 
	_putchar(c);
 
	}
 
	_putchar('\n');
 
	x++;
	}
}