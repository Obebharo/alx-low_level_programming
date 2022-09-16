#include <stdio.h>

/**
 * main - main block
 *
 * Description: Print the first 50 fibonacci numbers, starting with 1 and 2.
 * Numbers must be coma and space separated.
 * Return: 0
 */

int main(void)
{
	int num = 3;
	long int first = 1, second = 2;
	long int next = first + second;

	printf("%lu, ", first);
	printf("%lu, ", second);

	while (num <= 50)
	{
		if (num == 50)
			printf("%lu\n", next);
		else
			printf("%lu, ", next);

		first = second;
		second = next;
		next = first + second;
		num++;
	}
	return (0);
}
