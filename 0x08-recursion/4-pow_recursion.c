#include "main.h"

/**
 * _pow_recursion - cal the power of int
 *
 * @x:base
 * @y:exponent
 *
 * Return: integer power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
