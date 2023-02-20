#include <stdio.h>

/**
 * main - wa
 * Description: na
 * Return: di
 */

int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 8 ; a++)
	{
		for (b = 1; b <= 9; b++)
		{
			putchar(a);
			putchar(b);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
