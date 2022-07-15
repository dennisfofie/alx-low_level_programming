#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: first argument
 * @n: second argument
 */
void reverde_array(int *a, int n)
{
	int i = 0, k, aux;
	int *p;

	p = a;

	while (a[i] < n)
	{
		p++;
	}
	for (k = 0; k < n / 2; k++)
	{
		a[k] = aux;
		aux = *p;
		p--;
	}
	a++;
}
