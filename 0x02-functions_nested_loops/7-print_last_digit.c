#include "main.h"

/**
* print_last_digit - prints last digit of a number
* @n: argument
* Return: returns the last digit
*/

int print_last_digit(int n)
{
	last = n % 10;

	if (n < 0)
		last *= -1;
	_putchar(last + '0');
	return (last);
}
