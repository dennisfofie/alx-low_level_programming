#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes in */
/* initiating the main function with void as input */
/* main - entry */
/* Return: alway returns 0 */
	int main(void)
{
		char a;
	for (a = 'a' ; a <= 'z' ; a++)
	{
		if (a == 'e' || a == 'q')
		{
			continue;
		}	
		putchar(a);
		putchar('\n');
		/* returning sucess values of char a */
	}
	return (0);
}
