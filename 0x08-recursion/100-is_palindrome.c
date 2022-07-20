#include "main.h"
#include <string.h>

/**
 * is_palindrome - funtion to compare
 * @s: the string
 * Return: a palindrome
 */
int is_palindrome(char *s)
{
	int i;

	if (*s)
	{
		i = s + 1;

		if (strcmp(s, i) == 0)
		{
			return (1);
		}
		return (0);
	}
}
