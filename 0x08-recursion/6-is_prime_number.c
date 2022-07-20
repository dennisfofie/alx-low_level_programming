#include "main.h"

/**
 * is_prime_number - print a prinme number
 *
 * @n: the number to checked
 *
 * Return: prime number
 */
int is_prime_number(int n)\
{
	if ( n > 0 && n / n == 1 && n / 1 == n)
	{
		return (1);
	}
	return (0);
}
