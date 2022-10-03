#include "main.h"

/**
 * _isdigit - main function
 *
 * @c: prints the character 
 *
 * Return: 1 if true
 * Error: 0 if false
 */

int _isdigit(int c)
{
	if (c >= '1' && c <= '9')
	{
		return (1);
	}
	return (0);
}
