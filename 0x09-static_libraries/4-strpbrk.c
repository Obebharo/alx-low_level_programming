#include "main.h"

/**
 * _strpbrk - emulates thebc function strpbrk
 * @s: string to select from
 * @accept: string to search from
 * Return: pointer to s that matches.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return ('\0');
}
