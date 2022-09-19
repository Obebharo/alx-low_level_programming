#include "main.h"

/**
 * _puts - prints a string followed by newline
 * @str: pointer to recieve string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		*str++;
	}
	_putchar('\n');
}
