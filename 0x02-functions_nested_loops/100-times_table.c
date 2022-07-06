#include "main.h"

/*
 * print_times_table - main printing the n times tables
 *
 * Return: returns 0
 *
 */
void print_times_table(int n)
{
	int i;
	int j;

if (n <= 15 && n >= 0)
{
	for (i = 0; i <= 15; i++)
	{
		int prod = i * j;
		
		if ( i == 0)
		{
			_putchar('0');
		}else if (prod <= 9)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(prod + '0');
		}else if(prod > 99)
		{
		
			_putchar(',');
			_putchar(' ');
			_putchar((prod / 100) + '0');
			_putchar('0' + ((prod / 10) % 10));
			_putchar('0' + (prod % 10));
		}else
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + (prod / 10));
			_putchar('0' + (prod % 10));
		}

	}
	_putchar('\n');
}
}
