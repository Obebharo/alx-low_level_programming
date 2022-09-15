#include "main.h"

/**
 * print_last_digit - function
 *
 * @i: variable to hold arguments passed to the function
 * Return: returns the value of the last digit.
 */

int print_last_digit(int i)
{
	int last;

	last = i % 10;
	_putchar(last + '0');
	return (last);
}
