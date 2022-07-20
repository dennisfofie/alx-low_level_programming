#include "main.h"

/**
 * _strlen_recursion - function to returns a lenght of a string
 *
 * @s: character arguement
 *
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i = _strlen_recursion(s + 1);
		return (n = n + 1);
	}
	return (0);
}
