#include <stdio.h>

/**
 * main - main block
 *
 * Return: 0
 */

int main(void)
{
	long long int f1 = 0, f2 = 1, next;
	int i;

	for (i = 1; i <= 98; i++)
	{
		next = f1 + f2;

		if (i != 98)
			printf("%llu, ", next);
		else
			printf("%llu\n", next);
		f1 = f2;
		f2 = next;
	}
	return (0);
}
