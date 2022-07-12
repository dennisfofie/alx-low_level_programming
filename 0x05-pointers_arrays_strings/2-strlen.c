#include "main.h"

/**
 * _strlen - function for the lenght of the string
 *
 * @s: string for its lenght to be find
 *
 * Return: string lenght
 */
int _strlen(char *s)
{
	int i;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

