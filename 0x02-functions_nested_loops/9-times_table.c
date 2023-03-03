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
	char num1;
	char num2;
	char num3;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			z = i * j;
			if (z < 10)
			{
				nim1 = ' ';
				num2 = ' ';
				num3 = z;
			}
			_putchar('0' + num1);
			_putchar('0' + num2);
			_putchar('0' + num3);
			_putchar(',');
		}
		_putchar('\n');
	}
}
