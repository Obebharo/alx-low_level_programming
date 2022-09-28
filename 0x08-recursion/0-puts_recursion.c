#include "main.h"

/**
 * _puts_recursion - function to emulate puts()
 * @s: pointer to the string
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	if (s[0] != '\0')
		_puts_recursion(s + i);
}
