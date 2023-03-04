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
	int z;

	z = 1;

	for (a = 0; a <= 8 ; a++)
	{
		for (b = z; b <= 9; b++)
		{
			putchar('0' + a);
			putchar('0' + b);
			if (a == 8 && b == 9)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
		z++;
	}
	putchar('\n');
	return (0);
}
