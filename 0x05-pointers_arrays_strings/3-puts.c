#include "main.h"

/**
 * _puts - print out strings
 * @str: argument to the function
 * *Return: return void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
