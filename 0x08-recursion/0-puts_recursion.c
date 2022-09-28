#include "main.h"

/**
 * _puts_recursion - function to emulate puts()
 * @s: pointer to the string
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	_putchar(s[0]);

	if (s[1] != '\0')
	{
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
