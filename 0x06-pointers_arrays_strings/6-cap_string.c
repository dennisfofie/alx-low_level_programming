#include "main.h"

/**
 * cap_string - function to capitalize
 *
 * @x: parameter one
 *
 * Return: string
 */
char *cap_string(char *x)
{
	int i = 0;

	x[13] = {32, 9, '\n', 44, 59, 46, 33, 63, '"', 40, 41,
		'{', '}'};

	while (x[i])
	{
		if ((x[13] == x[i] && x[13] >= 97) || (x[12] == x[i - 1] && x[12] <= 122))
		{
			x[13] = x[i] - 32;
		}
		i++;
	}
	return (x);
}
