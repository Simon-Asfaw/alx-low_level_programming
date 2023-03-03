#include "main.h"

/**
 * print_last_digit - prints last dig
 *
 * Return: int
 */

int print_last_digit(int n)
{
	int n;
	int a;

	if (n % 10 >= 0)
	{
		a = n % 10;
		return (a);
	}
	else
	{
		a = n % 10;
		a = _abs(a);
		return (a);
	}
}
