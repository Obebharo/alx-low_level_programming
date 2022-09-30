#include "main.h"

/**
 * _strncpy - function that copies string
 *
 * @dest: pointer to first string
 * @src: pointer to second string
 * @n: number of bytes to copy
 * Return: pointer to copied sring.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
