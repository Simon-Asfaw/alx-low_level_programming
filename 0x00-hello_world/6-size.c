#include <stdio.h>
/**
 * main - boss
 * Description: does stuff
 * Return: zero Nada
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: ", sizeof(int), "byte(s)\n");
	printf("Size of a long int: ", sizeof(long int), "byte(s)\n");
	printf("Size of a long long int: ", sizeof(long long int), "byte(s)\n");
	printf("Size of a float: ", sizeof(float), "byte(s)\n");
	return (0);
}



