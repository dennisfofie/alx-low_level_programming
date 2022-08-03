#include "function_pointers.h"

/**
 * int_index - function containing
 * @array: param 1
 * @size: size of the array
 * @cmp: compare function pointer
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	else if (array && size && (*cmp))
	{
		for (i = 0; i < size; i++)
		{
			cmp(*(array + i));
		}
	}
	return (int_index);
}
