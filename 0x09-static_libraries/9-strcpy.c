#include "main.h"
#include "2-strlen.c"

/**
 * _strcpy - update value;
 * @dest: value of first interger
 * @src: value of second ineeger
 * Return: alwaus 0
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
