#include "lists.h"

/**
 * list_len - print the len of a list
 * @h: head of the link list
 * Return: len of a string
 */
size_t list_len(const list_t *h)
{

	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
