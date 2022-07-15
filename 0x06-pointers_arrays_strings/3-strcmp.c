#include "main.h"
#include <string.h>

/**
 * _strcmp - function to compare
 * @s1: first parameter
 * @s2: second parameter
 * Return: string
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	if (s1[i] - s2[i] == 0 && s1[i] != '\n')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
