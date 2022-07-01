#include <stdio.h>
/* main - entry point */
/* Return: return sucess value (0) */
	int main(void)
{
		char z;
	for (z = 'z' ; z >= 'a' ; z--)
	{
		putchar(z);
		putchar('\n');
	}
	return (0);
}
