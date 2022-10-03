#include "main.h"
#include <string.h>

/**
 * _memcpy - copy the memory
 *
 * @dest: destination
 * @src: source
 * @n: integer n
 * Return: character
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
