#include "main.h"
#include <string.h>
/**
 * *_memset - filling n byte to the pointer
 *
 * @s: destination
 * @b: source
 * @n: the number of bytes copy from c to s
 *
 * Return: characters
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
