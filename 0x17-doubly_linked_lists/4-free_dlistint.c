#include "lists.h"

/**
 * free_dlistint - free dlink from memory
 * @head: head of the dlink
 * Return: return dlink with some free
 */
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
