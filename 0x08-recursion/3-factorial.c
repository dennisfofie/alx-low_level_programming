#include "main.h"

/**
 * factorial - finds nth factorial
 *
 * @n: integer param
 * Return: a factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
