#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - functionto free dogs
 * @d: the dog to be free
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
