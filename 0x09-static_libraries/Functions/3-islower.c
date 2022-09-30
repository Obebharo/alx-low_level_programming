#include "main.h"

/**
 * _islower - identifies lower case characters.
 * @i: the variable that recieves the character to be checked.
 * Return: 1 if it is a lower case and 0 otherwise
 */
int _islower(int i)
{
	if (i >= 'a' && i <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
