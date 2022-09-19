#include "main.h"
#include <string.h>
/**
 * print_rev - function that prints string in reverse
 * @s: pointer to recieve the string
 */

void print_rev(char *s)
{
	short a;

	or (a = strlen(s); a >= 0; a--)
	{
		_putchar (s + a);
	}
	_putchar ('\n');
}
