#include "function_pointers.h"
#include <stdio.h>

/**
 * A - function to point to function pointer
 * @name - name to be printed
 */
void A(char *name)
{
	printf("Hello, my name is %s\n", name);
}
/**
 * print_name - print name
 * @name: name to be printed
 * f - function pointer
 */ 
void print_name(char *name, void (*f)(char *))
{
	if (f)
		 A(name);
}
