#include "lists.h"

/**
* listint_len - lenght of the link
* @h: head of the list
* Return: lenght of link
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count += 1;
		h = h->next;
	}
	return (count);
}
