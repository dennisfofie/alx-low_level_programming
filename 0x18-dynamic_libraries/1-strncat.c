#include "main.h"
#include <string.h>

/**
 * _strncat - the function to concat
 * @dest: destination of the concat
 * @src: source of concat
 * @n: number of time it concat
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
