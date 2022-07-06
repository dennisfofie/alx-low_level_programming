#include "main.h"

/**
 * jack_bauer - main 
 *
 * @> prints every minute of the day of fack bauer
 *
 * Result: return always 0.
 *
 */

void jack_bauer(void)
{
	int i;
	int s;

	for (i = 0  ; i <= 23 ; i++)
	{
		for ( s = 0 ; s <= 59 ; s++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(s / 10 + '0');
			_putchar(s % 10 + '0');
			_putchar('\n');

		}
	}	
}

