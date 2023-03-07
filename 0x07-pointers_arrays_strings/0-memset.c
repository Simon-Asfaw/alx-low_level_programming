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
	int z = 0;

	for (; n > 0; z++)
	{
		s[n] = b;
		n--;
	}

	return (s);
}
