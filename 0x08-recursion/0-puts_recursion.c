#include "main.h"

/**
 *_puts_recursion: done
 * @S: something
 * Return: void
 */

void _puts_recursion(char *s)
{
	_puts(s, _puts_recursion);
}
