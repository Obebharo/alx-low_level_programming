#include <stdio.h>

/**
 * main - main block
 *
 * Return: 0
 */

int main(void)
{
	int f1 = 0, f2 = 1, i, next;

	for (i = 1; i < 98; i++)
	{
		printf("%d ", f2);
		next = f1 + f2;

		f1 = f2;
		f2 = next;
	}
	return (0);
}
