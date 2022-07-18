#include "main.h"
#include <string.h>

/**
 * _strstr - find the first occurrence of a string in another string
 *
 * @haystack: first string argument
 * @needle: second string argument
 *
 * Return: a character
 */
char *_strstr(char *haystack, char *needle)
{
	int len = strstr(haystack, needle);

	return (len);
}
