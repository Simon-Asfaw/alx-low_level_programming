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

	for (i = 0; i < 10; i++)
	{
		for (J = 0; j < 10; j++)
		{
			_putchar('0' + i * j);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
	}
}
