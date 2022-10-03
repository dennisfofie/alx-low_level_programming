#include "main.h"
#include <string.h>

/**
 * _strspn - calculate the initial lenght of a from another string
 *
 * @s: string to calculate from other
 * @accept: string to index
 *
 * Return: integer
 */
unsigned int _strspn(char *s, char *accept)
{
	int len = strspn(s, accept);

	return (len);
}
