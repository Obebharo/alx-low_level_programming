
#include <stdio.h>

/**
 * main - program entry point
 *
 * Description: This program prints all lower case alphabets in reverse
 *with putchar()
 * Return: 0 if success
 */

int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
		putchar(a);
	putchar('\n');

	return (0);

}
