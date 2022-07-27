#include "main.h"

/**
 * create_array - the function to create the array
 *
 * @size: The size of the array
 * @c: The character to be init
 * Return: character strings
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *s;

	if (size == 0)
	{
		return (NULL);
	}
	s = (char *)(size * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
