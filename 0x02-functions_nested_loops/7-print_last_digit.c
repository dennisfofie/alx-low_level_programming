#include "main.h"

/**
 *
 * print_last_digit - main
 *
 * @n: finding the last digit of an integer
 *
 * Return: return n % 10 of integer
 *
 */

int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
