#include "main.h"

/**
 * _memset - function that sets bytes to memory
 * @s: pointer that recieves the address of memory
 * @b: constant byte used to fill the memory selected
 * @n: number of bytes to fill
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
