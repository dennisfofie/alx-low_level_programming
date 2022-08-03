#include "function_pointers.h"

/**
 * array_iterator - array to be printed
 * @array: array of parameter
 * @size: size of the array
 * @action: furction pointer
 */
void array_iterator(int *array, size_t size, void(*action)(int))
		{
			int i;

			if (action && size && arary)
			{
				for (i = 0; i < (int)size; i++)
				{
					action(*(array + i));
				}
			}
		}
