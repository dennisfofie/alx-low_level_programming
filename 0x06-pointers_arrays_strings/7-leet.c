#include "main.h"
#include <stdio.h>

/**
 * leet - function to be encodes
 *
 * @x: function argument
 *
 * Return: a character string
 */
char *leet(char *x)
{
	int i, k;
	char encode[] = "a4A4e3E3o0O0t7T7l1L1";

	for (i = 0; x[i] != '\0'; i++)
	{
		for (k = 0; encode[k] != '\0'; k++)
		{
			if (x[i] == encode[k])
			{
				x[i] = encode[k + 1];
				break;
			}
		}
	}
	return (x);
}
