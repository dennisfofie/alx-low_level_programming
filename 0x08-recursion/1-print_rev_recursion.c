#include "main.h"

/**
 * _print_rev_recursion - function to print a string in rev
 *
 * @s: character with the string
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(--s);
		_putchar(*s);
	}
	else
	{
		_putchar('\n');
	}
}
