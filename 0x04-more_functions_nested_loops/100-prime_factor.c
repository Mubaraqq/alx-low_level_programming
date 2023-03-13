#include <stdio.h>

/**
 *
 *
 */

int main(void)
{
	long int number = 612852475143;
	long int divisor = 2;
	long int large_primeF = 0;

	while (number != 1)
	{
		if (number % divisor == 0)
		{
			number = number / divisor;
			large_primeF = divisor;
		}
		divisor++;
	}
	printf("%ld\n", large_primeF);
	return (0);
}
