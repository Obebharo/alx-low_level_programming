#include <stdio.h>

/**
 * main - program entry point
 *
 * Description: program that print 0 to 9
 * Return: 0 if success
 */

int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
		putchar(a);
	putchar('\n');

	return (0);

}
