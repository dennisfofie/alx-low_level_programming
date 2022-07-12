#include "main.h"

/**
 * swap_int - swap the integers values
 *
 * @a: the value of integer a
 *
 * @b: the value of integer b
 */
void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	a = d;
	b = c;
}
