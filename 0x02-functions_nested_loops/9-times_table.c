#include "main.h"

/**
 * times_table - the table
 *
 * Return: void
 */

void times_table(void)
{
	int j;
	int i;
	int z;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			z = i * j;
			_putchar('0' + z);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
