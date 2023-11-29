#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - insert a new node at a given position
 *
 * @h: the head of a list
 * @idx: the index of the list where node should be added, start at 0
 * @n: the data of the node
 *
 * Return: the adress of the new node or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temporary, *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	temporary = *h;

	if (temporary == NULL)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*h = new_node;
		return (new_node);
	}
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = temporary;
		temporary->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (idx > 1 && temporary->next)
	{
		temporary = temporary->next;
		idx--;
	}
	if (idx > 1 && !temporary->next)
		return (NULL);

	new_node->prev = temporary;
	new_node->next = temporary->next;
	if (temporary->next)
		temporary->next->prev = new_node;

	temporary->next = NULL;
	return (new_node);
}
