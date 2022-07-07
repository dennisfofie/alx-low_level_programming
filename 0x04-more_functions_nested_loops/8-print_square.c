#include "main.h"

/**
 *
 * print_square - print the square
 *
 * @size: print the # stuff
 */ 

void print_square(int size)
{
	int i;
	int j;

	if (n < 0)
	{
	       _putchar('\n');	
	} else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
