#include "main.h"

/**
 *
 * times_table _ main thing
 *
 * Return: return always 0
 *
 */

void times_table(void)
{
	int a;
	int i;

	for (a = 0 ; a <= 9 ; a++)
	{
		for (i = 0 ; i <= 9 ; i++)
		{
			int product = a * i;
			if (i == 0)
			{
				_putchar('0');
			}else if (product <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			}else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
		}
		_putchar('\n');
	}
		
}
