#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: inputted size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int x, y;

	if (!(size <= 0))
	{
		for (x = 1; x <= size; x++)
		{
			for (y = 1; y <= size; y++)
			{
				if ((x + y) <= size)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
