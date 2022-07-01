#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/* more headers goes in */
/* initiate function main */
	int main(void)
{
	/* declaring variables a and A */
		char a;
		char A;
	/* using for loops */
	for (a = 'a' ; a <= 'z' ; a++)
	{
		putchar(a);
	}
	for (A = 'A' ; A <= 'Z' ; A++)
	{
		putchar(A);
	}
		putchar('\n');
	/* returning values */
	return (0);
}
