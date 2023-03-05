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
	int i;
	int j;
	int k;

	i = 0;
	j = 1;
	k = 2;

	for (a = i; a <= 7; a++)
	{
		for (b = j; b <= 8 ; b++)
		{
			for (c = k; c <= 9; c++)
			{
				putchar('0' + a);
				putchar('0' + b);
				putchar('0' + c);
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
	putchar('\n');
	return (0);
}
