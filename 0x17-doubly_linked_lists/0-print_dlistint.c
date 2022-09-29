#include "lists.h"

/**
 * print_dlistint - prints the element of d-linked
 * @h: head of the linked
 * Return: all elements of d-linked
 */
size_t print_dlistint(const dlistint_t *h)
{
	int data;
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", data = h->n);
		h = h->next;
		count += 1;
	}
	return (count);
}
