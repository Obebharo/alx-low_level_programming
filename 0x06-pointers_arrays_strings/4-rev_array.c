#include "main.h"

/**
 * reverse_array -  array that reverses its contents
 * @a: pointer to array contents
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int buff;
	int i = 0;
	int j = n - 1;

	while (i < j)
	{
		buff = a[i];
		a[i] = a[j];
		a[j] = buff;
		i++;
		n--;
	}
}
