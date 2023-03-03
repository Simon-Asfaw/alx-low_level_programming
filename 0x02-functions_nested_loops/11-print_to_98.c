#include "main.h"

/**
 * print_to_98 - all the way to 98
 *
 * @n: the starting pt
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ",n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ",n);
		}
	}
	else
	{
		printf("%d, ",n);
	}
}
