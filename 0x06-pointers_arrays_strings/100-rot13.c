#include "main.h"
#include <stdio.h>

/**
 *rot13 - rotate the alphabets
 *@x: parameter one
 *Return: string character
 */

char *rot13(char *x)
{
	int i, k;
	char encode[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char encode1[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; x[i] != '\0'; i++)
	{
		for (k = 0; encode[k] != '\0'; k++)
		{
			if ((x[i] == encode[k]))
			{
				x[i] = encode1[k];
				break;
			}
		}
	}
	return (x);
}
