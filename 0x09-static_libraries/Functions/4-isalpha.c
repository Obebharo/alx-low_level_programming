#include "main.h"

/**
 * _isalpha - identifies alphabet characters.
 * @i: the variable that recieves the character to be checked.
 * Return: 1 if it is an alphabet and 0 otherwise
 */
int _isalpha(int i)
{
	if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
