#include "function_pointers.h"

/**
 * print_name - print name
 * @name: name to be printed
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
	{
		f(name);
	}
}
