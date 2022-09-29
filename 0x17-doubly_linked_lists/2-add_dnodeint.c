#include "lists.h"
/**
 * add_dnodeint - add node at the beginning
 * @head: head of the link
 * @n: data to be insert
 * Return: return new link with n at the first
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	temp->n = n;
	temp->next = NULL;
	temp->prev = NULL;

	if (temp == NULL)
	{
		return (NULL);
	}
	if ((*head) == NULL)
	{
		*head = temp;
		return (temp);
	}
	else
	{
		(*head)->prev = temp;
		temp->next = (*head);
		*head = temp;

	}
	return (temp);
}
