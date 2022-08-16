#include "lists.h"

/**
* free_listint - free node
* @head: head of the node
*/
void free_listint(listint_t *head)
{
	listint_t *ptr;
	listint_t *p;

	ptr = head;

	while (ptr != NULL)
	{
		p = ptr->next;
		free(ptr);
		ptr = p;

	}
}
