#include "main.h"

/**
 * print_alphabet - iprints  the alphabets.
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

/**
 * main - program entry point
 *
 * Description: prints lower case alphabets.
 * Return: 0
 */

int main(void)
{
	print_alphabet();
	return (0);
}
