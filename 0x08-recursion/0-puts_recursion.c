#include "main.h"

/**
 * _puts_recursion - function to emulate puts()
 * @s: pointer to the string
 */

void _puts_recursion(char *s)
{
	if (s[1] != '\0')
	{
		_putchar(s[0]);
		_puts_recursion(s + i);
	}
	else
	{
		_putchar('\n');
	}
}