#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	printf("size of a char: %ld byte(s)\n", sizeof(char));
	printf("size of a an int: %ld byte(s)\n", sizeof(int));
	printf("size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("size of a long long int: %ld byte(s)\n", sizeof(long long int));
	printf("size of a float: %li byte(s)\n", sizeof(float));

	return (0);
}
