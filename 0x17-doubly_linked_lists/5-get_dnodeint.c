#include "lists.h"
/**
 * get_dnodeint_at_index - get nth index of a dlinked
 * @head: head of the link
 * @index: index to be the node
 * Return: nth node of the dlinked
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	temp = head;

	if (head == NULL)
	{
		return (NULL);
	}
	while (temp != NULL && i != index)
	{
		i++;
		temp = temp->next;
	}
	if (i == index)
	{
		return (temp);
	}
	else
	{
		return (NULL);
	}
}
