#include "main.h"
/**
 * _islower: entry point
 * Description: checks for lowercase character
 * @c: the integer value it receives
 * Return: return 1 if true; 0 if false
 */
int _islower(int c)
{
	int ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == c)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
