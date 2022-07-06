#include <stdio.h>

/**
 * 
 * main - main functions
 *
 * Return: return 0
 *
 */

int main(void)
{
	counter = 2;
	long int a = 1;
	long int b = a + 1;
	long int c = a + b;
	
	while(c < 4000000)
	{
		if (c % 2 == 0)
		{
			counter = c + 1;
		}
		a = b;
		b = c;
		c = a + b;
	}
	prinf("%d\n", counter);
	return (0);
}
