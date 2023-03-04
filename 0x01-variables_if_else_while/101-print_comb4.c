#include <stdio.h>

/**
 * main - prints unique combo of numbers
 * Description: prints numbers
 * Return: void
 */

int main(void)
{
	int j;
	int a;
	int b;
	int z;
	int i;

	z = 1;
	i = 0;

	for (j = i; j <= 7; j++)
	{
		for (a = z; a <= 8 ; a++)
		{
			for (b = 2; b <= 9; b++)
			{
				putchar('0' + j);
				putchar('0' + a);
				putchar('0' + b);
				if (j == 7 && a == 8 && b == 9)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			z++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
