#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - addition funtion to perform variadic
 * @n: number of arguments
 * Return: sum of integers values
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int sum = 0;
	unsigned int i = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, unsigned int);
	}
	return (sum);

	va_end(list);
}
