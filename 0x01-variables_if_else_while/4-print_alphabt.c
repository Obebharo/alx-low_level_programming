#include <stdio.h>

/**
 * main - program entry point
 *
 * Description: This program prints all lower case alphabets
 * except e and q with putchar()
 * Return: 0 if success
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'e' || a == 'q')
			continue;
		putchar(a);
	}
	putchar('\n');

	return (0);

}
