#include "main.h"

/**
 *_puts_recursion         - done
 * @s: something
 * Return: void
 */

void _puts_recursion(char *s)
{
	_putchar(s, _puts_recursion);
}
