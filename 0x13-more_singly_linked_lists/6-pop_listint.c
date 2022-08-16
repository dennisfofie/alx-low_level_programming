#include "lists.h"

/**
* pop_listint - linked list
* @head: head of the linked list
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	size_t n;

	if (*head == NULL)
		return (0);
	tmp = *head;
	n = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (n);
}
