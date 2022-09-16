#include "main.h"

/**
 * print_times_table - prints the 9 times table, starting with 0
 * @n:number of times
 */

void print_times_table(int n)
{
	int num, mult, prod;

	for (num = 0; num <= n; num++)
	{
		if ((n > 15) || (n < 0))
			break;
		_putchar('0');
		for (mult = 1; mult <= n; mult++)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');

			prod = num * mult;

			if (prod <= n)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
