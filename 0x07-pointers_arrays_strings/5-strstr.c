#include "main.h"

/**
 * _strstr - finds the the first occurence of a substring
 * @haystack: first string
 * @needle: second string
 * Return: pointer to the location of substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack != '\0')
	{
		i = 0;
		while (*haystack == *needle && *haystack != '\0' && *needle != '\0')
			haystack++, needle++, k++;
			if (*needle == '\0')
				return (haystack - i);
			haystack -= (i - 1), needle -= i;
	}
	return ('\0');
}
