#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/* main the entry point of the program */
	int main(void)
{
	/* initializing a variables n and lastname */
		int n;
		int lastname;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		/* your code goes there */
		lastname = n % 10;
		/* declaring a if statement */
		if (lastname > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, lastname);
		}
		else if (lastname == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, lastname);
		}
		else
		{
			printf("Last digit of %d is %d and is less than 6 and not 0", n, lastname);
		}
		/* return the values of the variables */
		return (0);

}
