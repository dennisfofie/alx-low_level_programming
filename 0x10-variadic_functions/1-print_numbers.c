#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function to print numbers
 * @separator: strinsg argument
 * @n: number of integer
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if ((int*)separator != NULL)
		{
			printf("%d ", va_arg(list, unsigned int));
		}
	}
	printf("\n");

	va_end(list);
}
