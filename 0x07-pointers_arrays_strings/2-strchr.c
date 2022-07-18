#include "main.h"
#include <string.h>

/**
 * _strchr - copies the first occurence of a char in string
 *
 * @s: string looking
 * @c: character to be looking at the string
 *
 * Return: string
 */
char *_strchr(char *s, char c)
{
	strchr(s, c);
	return (s);
}
