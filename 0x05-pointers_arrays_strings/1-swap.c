#include<stdio.h>

/**
 * swap_int - swap num
 * @a: var1
 * @b: var2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int *p;
	int *p2;

	*p = *a;
	*p2 = *b;
	*a = *p2;
	*b = *p;
}
