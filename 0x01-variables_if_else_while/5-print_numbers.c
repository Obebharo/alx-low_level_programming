#include <stdio.h>

/**
 * main - program entry point
 *
 * Description: program that print 0 to 9
 * Return: 0 if success
 */

int main(void)
{
	short int a;

	for (a = 0; a <= 9; a++)
	{
		printf("%d", a);
	}
	putchar('\n');

	return (0);

}
