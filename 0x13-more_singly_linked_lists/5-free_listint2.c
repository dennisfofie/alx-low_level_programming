#include "lists.h"

/**
* free_listint2 - freeing function
* @head: head of the node
*/
void free_listint2(listint_t **head)
{
	listint_t *ptr, *p;

	ptr = *head;

	while (ptr != NULL)
	{
		p = ptr->next;
		free(ptr);
		ptr = p;
	}
	*head = NULL;
}
