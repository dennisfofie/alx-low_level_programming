#include "main.h"

/**
 * _strdup - a funtion to duplicate a string
 *
 * @str: character string
 * @n: the size of the string
 * Return: a string to a pointer
 */
char *_strdup(char *str, int n)
{
	int i, n;
	char *s;

	if (str == NULL)
		return (NULL);
	s = (char *)malloc(n * sizeof(char));
	for (i = 0; i < n; i++)
	{
		s[i] = *str;
	}
	return (s);
}
