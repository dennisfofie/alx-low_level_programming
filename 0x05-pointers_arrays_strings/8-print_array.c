#include "main.h"

/**
 * print_array - print n element of an array
 * @a: first argumeent
 * @n: second argument
 */
void print_array(int *a, int n)
{
	int *ptr = a, i;

	for (i = o; i < n; i++)
	{
		if (i == 0)
			printf("%d", ptr[i]);
	else if (i > 0)
	{	printf(", ");
		printf("%d", ptr[i]);
		}
	}
	printf("%c". '\n');
}
