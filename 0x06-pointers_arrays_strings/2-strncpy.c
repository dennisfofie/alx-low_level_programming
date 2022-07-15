#include "main.h"
#include <string.h>

/**
 * _strncpy - copy two strings
 *
 * @dest: first parameter
 * @src: second parameter
 * @n: integer n
 * Return: strings character
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
