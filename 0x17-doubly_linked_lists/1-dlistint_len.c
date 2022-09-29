#include "lists.h"
/**
 * dlistint_len - print len of the link
 * @h: head of the link
 * Return: return len of elements in link
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
