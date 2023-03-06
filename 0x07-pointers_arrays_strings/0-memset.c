#include "main.h"

/**
 * _memset - prints buffer
 * @s: ptr
 * @b: val
 * @n: quant
 *
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	char z;

	for (int i = 0; i < n; i++)
	{
		&s[n] = b;
	}
	z = *s;

	return (z);
}
