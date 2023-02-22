#include "main.h"
/**
 * _isalpha - checks alp
 * @c : is the var
 * Return : my mango 1 0r0
 */

int _isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	else
		return (0);
}
