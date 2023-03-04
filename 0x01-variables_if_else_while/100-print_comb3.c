#include <stdio.h>

/**
 * main - prints unique combo of numbers
 * Description: prints numbers
 * Return: void
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
			putchar('0' + a);
			putchar('0' + b);
			putchar(',');
			putchar(' ');
		}
		b++;
	}
	putchar('\n');
	return (0);
}
