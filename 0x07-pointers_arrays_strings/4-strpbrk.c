#include "main.h"
#include <string.h>

/**
 * _strpbrk - find the first occurence of any character in string
 *
 * @s: first argument
 * @accept: second argument
 *
 * Return: a string
 */
char *_strpbrk(char *s, char *accept)
{
	char *len = strpbrk(s, accept);

	return (len);
}
