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
	int c;
	int d;
	int h = 0, i = 1, j = 2, k = 3;

	for (a = h; a <= 6; a++)
	{
		for (b = i; b <= 7 ; b++)
		{
			for (c = j; c <= 8; c++)
			{
				for (d = k; d <= 9; d++)
				{
					putchar('0' + a);
					putchar('0' + b);
					putchar(' ');
					putchar('0' + c);
					putchar('0' + d);
					if (a == 9 && b == 8 && c == 9 && d == 9)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				j++;
				k++;
			}
			i++;
			j = i + 1;
			k = i + 2;
		}
		h++;
	}
	putchar('\n');
	return (0);
}
