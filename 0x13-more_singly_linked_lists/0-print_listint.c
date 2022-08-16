#include "lists.h"

/**
* print_listint - print the element of a list
* @h: head of the list
* Return: the number of element
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr;

	ptr = h;
	
	while (ptr)
	{
		printf("%d\n", ptr->n);
		count += 1;
		ptr = ptr->next;
	}
	return (count);
	
}
