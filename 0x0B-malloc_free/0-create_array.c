#include <stdlib.h>

/**
 * create_array - function that initializes an array of characters.
 * @size: array size
 * @c: character for initialization
 * Return: char pointer
 */

char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size);

	if (size == 0 || arr == 0)
		return (0);
	while (size--)
		arr[size] = c;
	return (arr);
}
