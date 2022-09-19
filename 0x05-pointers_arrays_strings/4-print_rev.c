#include "main.h"

/**
 * print_rev - function that prints string in reverse
 * @s: pointer to recieve the string
 */

void print_rev(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		a++;
		*s++;
	}
	for (a--; a >= 0; a--)
		_putchar(*s[a]);
	_putchar ('\n');
}
