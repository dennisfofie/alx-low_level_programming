#include "main.h"

/**
 * _puts_recursion - a function to print the recursion
 *
 * @s: character to a pointer
 */
void _puts_recursion(char *s)
{
	if (*s)
	{

		_putchar(*s);
		_puts_recursion(++s);
	}
	else
	{
		_putchar('\n');
	}
}
