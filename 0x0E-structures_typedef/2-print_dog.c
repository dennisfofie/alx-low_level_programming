#include "dog.h"
#include <stdio.h>

/**
 * print_dog - structure to print the dog
 * @d: name of the dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("%s\n", (*d).name);
		}
		printf("%.2f\n", (*d).age);
		if ((*d).owner == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("%s\n", (*d).owner);
		}
	}
}
