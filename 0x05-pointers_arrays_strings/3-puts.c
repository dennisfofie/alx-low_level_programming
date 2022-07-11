#include "main.h"
#include <string.h>
/**
 * _puts - prints string to stdout
 *
 * @str: a pointer parameter
 */
void _puts(char *str)
{
	 int j;

	 j = *str;

	 for (j = 0; j <= '\0'; j++)
	 {
		 _putchar(j);
	 }
	_putchar('\n');
}

