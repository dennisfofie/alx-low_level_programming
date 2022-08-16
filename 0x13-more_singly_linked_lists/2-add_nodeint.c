#include "lists.h"
/**
* add_nodeint - add int to a lisk
* @head: head pointing to first element
* @n: element to be added
* Result: node after n has been added
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;
	
	tmp = malloc(sizeof(listint_t));

	if (tmp == NULL)
	{
		return (NULL);
	}
	else
	{
		tmp->n = n;
		tmp->next = *head;
		*head = tmp;
	}
	return (*head);
}
