#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function to print strings
 * @separator: strings to be printed
 * @n: numbers of int
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *p;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		p = va_arg(list, char*);

		if (p == NULL)
		{
			printf("%s", p);
		}
		printf("%s", p);
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
