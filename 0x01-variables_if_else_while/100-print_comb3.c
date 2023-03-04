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

	b = 1;

	for (a = 0; a <= 8 ; a++)
	{
		for (; b <= 9; b++)
		{
			putchar(a);
			putchar(b);
			putchar(',');
			putchar(' ');
		}
		b++;
	}
	putchar('\n');
	return (0);
}
