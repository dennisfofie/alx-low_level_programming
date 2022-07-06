#include "main.h"

/**
 * int print_sign(int n) - main prints the the sign of n
 *
 * Return: return 1 when greater than zero , o when zero and -1 when less than zero
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}else if (n == 0)
	{
		_putchar('0');
		return (0);
	}else
	{
		_putchar('-');
		return (-1);
	}
}
