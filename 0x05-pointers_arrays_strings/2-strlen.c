#include "main.h"

/**
 * _strlen - function that returns length of a string
 * @s: pointer that recieves address of string
 * Return: length of string.
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
		length++;
	return (length);
}
