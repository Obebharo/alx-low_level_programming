#include "main.h"

/**
 * _strncat - concatenates two strings
 * the strings will use at most n bytes from src
 * src does not need to be null-terminated
 *
 * @dest: ponter to the first string
 * @src: pointr to the second string
 * @n: number of bytes
 *
 * Return: pointer to the resulting string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int last;
	int i = 0;

	while (dest[i] != '\0')
		i++;
	last = i;
	for (i = 0; src[i] != '\0' && i != n; i++)
	{
		dest[last] = src[i];
		last++;
	}
	dest[last] = '\0';
	return (dest);
}
