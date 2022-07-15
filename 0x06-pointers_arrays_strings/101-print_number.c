#include "main.h"

/**
 * print_number - print the integer number
 *
 * @n: integer to be output
 */

void print_number(int n)
{
	int i = 0;

	while ((i <= n || i >= n))
	{
		i++;
		_putchar(n);
	}
}
