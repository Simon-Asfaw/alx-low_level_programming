#include "main.h"

/**
 * _isalpha - checks for alphabet
 * @c: is the var
 * Return: my mango 1 0r0
 */

int _isalpha(int c)
{
	/* _isalpha does stuff */
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	else
		return (0);
}
