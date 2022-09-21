#include "main.h"

/**
 * string_toupper - function that changes all lower case to upper case
 * @s: pointer to input string
 * Return: pointer to upper case string
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}
	return (s);
}
