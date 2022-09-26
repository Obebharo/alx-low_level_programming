#include "main.h"

/**
 * _strspn - function that emulates strspn
 * @s: string whose characters will be searched for
 * @accept: string whose xters eill be cpared to
 * Return: unsigned byte.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j] == '\0')
			break;
		k++;
	}
	return (k);
}
