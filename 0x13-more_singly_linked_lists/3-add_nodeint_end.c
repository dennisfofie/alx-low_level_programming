#include "lists.h"

/**
* add_nodeint_end - add node to the end of list
* @head: head of the node
* @n: element to be added
* Return: node addition to the end
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *tmp2;

	tmp = malloc(sizeof(listint_t));

	if (tmp == NULL)
	{
		return (NULL);
	}
	else
	{
/* when tmp next element point to null, then last is tmp */
		tmp->n = n;
		tmp->next = NULL;

		if (*head == NULL)
		{
			*head = tmp;
			return (tmp);

		}
		tmp2 = *head;

			while (tmp2->next)
			{
				tmp2 = tmp2->next;
			}
			tmp2->next = tmp;
	}
	return (tmp);
}
