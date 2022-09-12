
#include <stdio.h>

/**
 * main - program entry point
 *
 * Description: This program prints all the nmbers of base 16
 * with putchar()
 * Return: 0 if success
 */

int main(void)
{
	short int num;
	char a;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (a = 'a'; a <= 'f'; a++)
		putchar(a);
	putchar('\n');

	return (0);
}
