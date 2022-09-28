#include "main.h"

/**
 * _pow_recursion - function t retrieve power of a number
 * @x: base
 * @y: index
 * Return: result
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		y--;
		return (x * _pow_recursion(x, y));
	}
}
