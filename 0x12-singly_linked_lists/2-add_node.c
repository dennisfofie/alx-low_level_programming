#include "lists.h"
#include <string.h>

/**
 * add_node - adding anew node to a linked list
 * @head: head of the node
 * @str: string passed as agurmednt
 * Return: anode to linked list
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t len = 0;
	list_t *tmp;

	while (str[len])
	{
		len++;
	}
	tmp = malloc(sizeof(list_t));

	if (!tmp)
		return (NULL);

	tmp->str = strdup(str);
	tmp->len = len;
	tmp->next = (*head);
	(*head) = tmp;

	return (*head);
}
