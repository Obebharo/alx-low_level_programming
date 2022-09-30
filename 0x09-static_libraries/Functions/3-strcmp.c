#include "main.h"

/**
 * _strcmp - function that compares two strings
 *
 * @s1: first string to be compared
 * @s2: second string to be compared
 *
 * Return: pointer to the string
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int value;

	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
		i++;
	value = s1[i] - s2[i];
	return (value);
}
