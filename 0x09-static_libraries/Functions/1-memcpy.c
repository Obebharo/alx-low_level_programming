#include "main.h"

/**
 * _memcpy - function that copies a memory area
 * @dest: where to paste copied bytes
 * @src: source of bytes
 * @n: number of bytes to copy from source
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
