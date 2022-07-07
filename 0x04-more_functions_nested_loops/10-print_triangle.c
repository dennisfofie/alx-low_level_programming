#include "main.h"

/**
 *
 * print_triangle - prints the number
 *
 * @size: print the triangle
 *
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;
	
	if (size <= o)
	{
		_putchar('\n');
	}else
	{

		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
			{	
				_putchar(' ');
			}
			for (k = 0; k < i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
