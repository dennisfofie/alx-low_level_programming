#include "main.h"
#include "string.h"

/**
 * _strcat - concats two arrays
 * @dest: destination of concat
 * @src: source of the concat
 * Return: char value
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
	dest = '\0';
}
