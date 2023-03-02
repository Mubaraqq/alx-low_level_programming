#include "main.h"
/**
 * print_sign- entry point
 * Description: prints the sign of a number.
 * @n: input integer
 * return: return values
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
