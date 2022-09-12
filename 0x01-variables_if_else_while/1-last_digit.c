#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program entry point
 *
 * Description: This program generates a random number using time,
 * prints the last digit and check if the last digit is >5 or ==0 or <6.
 * Return: 0
 */

int main(void)
{
	int n;
	char last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	printf("Last digit of %d is %d ", n, last);

	if (last > 5)
		printf("and is greater than 5\n");
	else if (n == 0)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n");

	return (0);

}
