#include "main.h"

/**
 * swap_int - function that swaps two integers
 * @a: pointer to recieve address of first integer
 * @b: pointer to recieve address of second integer
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
