#include "main.h"
/**
 * print_sign - what
 * @n: var num
 * Return: for who
 */

int print_sign(int n)
{
	/* print_sign - for you */
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
