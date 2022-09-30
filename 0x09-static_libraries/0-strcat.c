#include "main.h"

/**
 * _strcat - function to concatenate two stings
 * and return a pointer to the resulting string
 *
 * @dest: pointer to the first string
 * @src: pointer to the second string
 *
 * Return: a pointer dest to the calling function
 */

char *_strcat(char *dest, char *src)
{
	int last;
	int i = 0;

	while (dest[i] != '\0')
		i++;
	last = i;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[last] = src[i];
		last++;
	}
	dest[last] = '\0';
	return (dest);
}
