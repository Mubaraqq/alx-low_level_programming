#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of \ to be printed
 * Return: void
 */

void print_diagonal(int n)
{
	int x = 0, xy;

	while (x < n && n > 0)
	{
		xy = 0;
		while (xy < x)
		{
			_putchar(' ');
			xy++;
		}

		_putchar('\\');
		_putchar('\n');
		x++;
	}
	if (x == 0)
		_putchar('\n');
}
