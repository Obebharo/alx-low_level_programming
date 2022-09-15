#include "main.h"

/**
 * _abs - identifies characters.
 * @i: the variable that recieves the character to be checked.
 * Return: returns the absolute value
 */
int _abs(int i)
{
	if (i < 0)
	{
		return (i * -1);
	}
	else
	{
		return (i);
	}
}
