#include<stdio.h>

/**
 * _strlen - the length of
 * @s: input string
 * Return: int
 */

int _strlen(char *s)
{
	int temp = 0;

	while (s != '\0')
	{
		s++;
		temp++;
	}
	return (temp);
}
