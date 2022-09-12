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
		printf("is positive");
	else if (n == 0)
		printf("is zero");
	else
		printf("is negative");

	return (0);

}
