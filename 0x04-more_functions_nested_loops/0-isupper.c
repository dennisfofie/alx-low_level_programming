#include "main.h"

/**
 * _isupper - main function
 *
 * @c: print the character
 *
 * Return: 1 if success
 *
 * Error: 0 if error
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0); 
}	
