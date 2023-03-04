#include <stdio.h>
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
		while (n < 99)
		{
			if (n == 98)
			{
				printf("%d\n", n);
				break;
			}
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 97)
		{
			if (n == 98)
			{
				printf("%d\n", n);
				break;
			}
			printf("%d, ", n);
			n--;
		}
	}
	else
	{
		printf("%d\n", n);
	}
}
