#include <stdio.h>
#include "lists.h"

/**
* print_list - prints all the elements of a list_t
* @h: The head of the node list_t
* Return: a positive integer
*/
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			i++;
		}
	}
	return (i);
}
