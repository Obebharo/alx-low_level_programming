#include "main.h"

/**
 * add - print the result of adding two inttegers
 *
 * @n: recieves intoming data
 *
 *
 */

void add(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);

		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
