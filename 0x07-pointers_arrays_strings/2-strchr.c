#include "main.h"

/**
 * _strchr - function that emulates strchr
 * @s: pointer to the string
 * @c: character to search for
 * Return: pointer to first occurence of c.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
		else
			return (NULL);
	}
}
