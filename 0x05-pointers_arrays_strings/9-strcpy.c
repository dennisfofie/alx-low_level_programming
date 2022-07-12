#include "main.h"

/**
 * _strcpy - update value;
 * @dest: value of first interger
 * @src: value of second ineeger
 * Return: alwaus 0
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + 1) != '\0')
	{
		l++;
	}
	for (; x < l; x++)
	{
	dest[x] = src[x];
	}	
	dest[1] = '\0';
	return (dest);
}
