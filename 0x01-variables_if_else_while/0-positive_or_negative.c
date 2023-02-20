#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - style
 * Description: wow
 * Return: numbers
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%lu is posetive", n)
	}
	else if (n == 0)
	{
		printf("%lu is zero", n);
	}
	else
	{
		printf("%lu is negative", n);
	}
	return (0);
}
