#include "main.h"

/**
 * int _isalpha(int c) - main
 *
 * Return: return 1 if isalpha otherwise 0;
 *
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
