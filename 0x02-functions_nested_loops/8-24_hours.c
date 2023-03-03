#include "main.h"

/**
 * jack_bauer - the 24 thing
 *
 * Return: void
 */

void jack_bauer(void)
{
	int H;
	int h;
	int M;
	int m;

	for (H = 0; H < 3; H++)
	{
		for (h = 0; h < 4; h++)
		{
			for (M = 0; M < 6; M++)
			{
				for (m = 0; m < 10; m++)
				{
					_putchar('0' + H);
					_putchar('0' + h);
					_putchar(':');
					_putchar('0' + M);
					_putchar('0' + m);
					_putchar('\n');
				}
			}
		}
	}
}
