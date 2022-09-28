#include "main.h"

/**
 * _strlen_recursion - recursion vwesion of strlen
 * @s: pointer to string
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i = _strlen_recursion(s + 1);
		i++;
	}
	return (i);
}
