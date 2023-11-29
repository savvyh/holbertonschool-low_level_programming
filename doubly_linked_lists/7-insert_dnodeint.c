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
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *temporary;
	unsigned int index;

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
		*h = new_node;
		if (*h != NULL)
		{
			(*h)->prev = new_node;

		}
		return (new_node);
	}

	temporary = *h;
	for (index = 0; index < idx - 1; index++)
	{
		if (temporary == NULL)
			free(new_node);
			return (NULL);

		temporary = temporary->next;
	}

	new_node->next = temporary->next;
	if (temporary->next != NULL)
		temporary->next->prev = new_node;

	temporary->next = new_node;
	new_node->prev = temporary;

	return (new_node);
}
