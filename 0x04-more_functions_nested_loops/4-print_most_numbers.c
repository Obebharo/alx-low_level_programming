#include "main.h"

/**
 * print_numbers - a function that prints the numbers, from 0 to 9,
 * followed by a new line.
 *
 * Return: always 0 (success).
 */

void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '0' || i == '9')
			continue;
		_putchar(i);
	}
	_putchar('\n');
}
