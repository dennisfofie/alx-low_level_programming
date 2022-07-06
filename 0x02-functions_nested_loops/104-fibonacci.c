#include <stdio.h>

/**
 * main - main function
 *
 * Return; always 0
 *
 */

int main(void)
{
	int counter = 2;
	float a = 1;
	float b = a + 1;
	float c = a + b;

	printf("%.of, ", a);
	printf("%.0f, ", b);
	while (counter < 98)
	{
		counter++;
		prinf("%.0f", c);
		a = b;
		b = c;
		c = a + b;
		if (counter < 98)
		{
			printf(", ");
		}
	}
	printf('\n');
	return (0);
}
