#include "main.h"

/**
 *
 * int _islower(int c) = prints the lowercase of a int
 *
 * Return: always 1 if c is lower otherwise 0.
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

