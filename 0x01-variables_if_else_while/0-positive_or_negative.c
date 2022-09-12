#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program entry point
 *
 * Description: This program generates a random number using time
 * and checks if that random number is positive, zero or negative.
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);

}