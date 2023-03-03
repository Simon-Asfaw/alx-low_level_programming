#include "main.h"

/**
 * jack_bauer - the 24 thing
 *
 * Return: void
 */

void jack_bauer(void)
{
	int H;
	int M;
	int m;

	H = 24;

	while (H < 24)
	{
		for (M = 0; M < 6; M++)
		{
			for (m = 0; m < 10; m++)
			{
				_putchar('0' + H / 10);
				_putchar('0' + H % 10);
				_putchar(':');
				_putchar('0' + M);
				_putchar('0' + m);
				_putchar('\n');
			}
		}
	}
}
