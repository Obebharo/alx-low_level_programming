#include "main.h"

/**
 * print_sign - identifies alphabet characters.
 * @i: the variable that recieves the character to be checked.
 * Return: 1 if +ve 0 if zero and -1 if -ve
 */
int print_sign(int i)
{
	if (i > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (i == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
