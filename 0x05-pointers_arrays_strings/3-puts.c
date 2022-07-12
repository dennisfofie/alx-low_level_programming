#include "main.h"
#include <string.h>

/**
 * _puts - puts string to stdout
 *
 * @str: the strings to be output
 */
void _puts(char *str)
{
	int n, s;

	s = *str;
	n = strlen(s);

	for (; n <= n - 1; n < '\0'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
