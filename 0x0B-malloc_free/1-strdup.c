#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _strdup - function that returns copy of the string used as argument.
 * @str: pointer to the string
 * Return: pointer 
 */

char *_strdup(char *str)
{
	int i = 0;
	int len = 0;

	if (str == NULL)
		return (NULL);
	for (; str[len] != '\0'; len++)
		;
	char *arr = malloc(len * sizeof(char));

	if (arr == 0)
		return (NULL);
	else
	{
		for (; i<size; i++)
		       arr[i] = str[i];
	}
	return (arr);
}
