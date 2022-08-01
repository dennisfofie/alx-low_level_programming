#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog ioi- function to copy the new dog info
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: an struct data struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, l = 0, l2 = 0;
	dog_t *ndog;
	char *a;
	char *b;

	for (i = 0; name[i] != '\0'; i++)
		l++;
	for (i = 0; owner[i] != '\0'; i++)
		l2++;
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return(NULL);
	a = malloc((l + 1) * sizeof(char));
	if (a == NULL)
	{
		free(ndog);
		return (NULL);
	}
	for (i = 0; i < l; i++)
		a[i] = name[i];
	a[i] = '\0';
	(*ndog).name = a;
	(*ndog).age = age;
	b = malloc((l2 + 1) * sizeof(char));
	if (b == NULL)
	{
		free(a);
		free(ndog);
		return (NULL);
	}
	for (i = 0; i < l2; i++)
		b[i] = owner[i];
	b[i] = '\0';
	(*ndog).owner = b;
	return (ndog);
}
