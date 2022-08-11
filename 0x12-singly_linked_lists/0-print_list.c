#include "lists.h"

/**
* print_list - prints all the elements of a list_t
* @h: The head of the node list_t
* Return: a positive integer
*/
size_t print_list(const list_t *h)
{
	int i;

	if (str == NULL)
	{
		printf("[0] (nil)\n");
	}
	h = NULL;

	for (i = 0; i < len && h != NULL; i++)
	{
		printf("%s\n", str[i]);
	}
	return (0);
}
