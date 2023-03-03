#include "main.h"

/**
 * print_last_digit - prints last dig
 *
 * @n: input
 *
 * Return: int
 */

int print_last_digit(int n)
{
	if ((n % 10) < 0)
	{
		n = n % 10;
		n = -1 * n;
		_putchar('0' + n);
		return (n);
	}
	else
	{
		n = n % 10;
		_putchar('0' + n);
		return (n);
	}
}
