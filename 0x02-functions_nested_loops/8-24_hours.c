#include "main.h"

/**
 * jack_bauer - function
 *
 * Description: prints every minute of the day
 */

void jack_bauer(void)
{
	int hrs;
	int min;
	int inthrs;
	int intmins;

	for (hrs = 0; hrs < 24; hrs++)
	{
		for (min = 0; min < 60; min++)
		{
			inthrs = hrs / 10;
			intmins = min / 10;
			_putchar(inthrs + '0');
			_putchar((hrs % 10) + '0');
			_putchar(':');
			_putchar(intmins + '0');
			_putchar((min % 10) + '0');
		}
	}
}
