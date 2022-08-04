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

	if (n != 0)
	{

		for (i = 0; (i < n - 1); i++)
		{
			if ((int*)separator != NULL)
			{	
				printf("%d%s", va_arg(list, unsigned int), separator);
			}
			else
			{
				printf("%d", va_arg(list, unsigned int));
			}
		}
		printf("%d", va_arg(list, unsigned int));
		va_end(list);
	}
	printf("\n");
}
