#include "lists.h"

/**
 * sum_dlistint - sum up all the data of a linked
 * @head: head of dlinked
 * Return: return sumation of data in list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
