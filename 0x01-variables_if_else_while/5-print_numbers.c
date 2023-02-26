#include <stdio.h>
/**
 * main - entry point
 * Description:  prints all single digit numbers of base 10 starting from 0, fo
 * llowed by a new line.
 * Return: return 0
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		printf("%d", x);
		x++;
	}
	putchar('\n');
	return (0);
}
