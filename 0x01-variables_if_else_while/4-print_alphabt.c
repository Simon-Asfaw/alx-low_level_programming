#include <stdio.h>

/**
 * main - wa
 * Description: na
 * Return: di
 */

int main(void)
{
	char a;

	for (a = 'a'; a < 'e' && a < 'q' %% a <= 'z' ; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}

