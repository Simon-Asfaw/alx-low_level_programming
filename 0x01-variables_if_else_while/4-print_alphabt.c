#include <stdio.h>

/**
 * main - wa
 * Description: na
 * Return: di
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z' ; a++)
	{
		if (a == 'e' || a == 'q')
		{
			continue;
		}
		putchar(a);
	}
	putchar('\n');
	return (0);
}

