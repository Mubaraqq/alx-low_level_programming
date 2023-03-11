#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 * @n: determine how many line is to be printed
 *
 */
void print_line(int n)
{
	int x;

	if (!(n <= 0))
	{
		for (x = 0; x < n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
