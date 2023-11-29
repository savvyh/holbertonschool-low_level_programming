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
	dlistint_t *temporary = *h;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx != 1)
	{
		temporary = temporary->next;
		if (temporary == NULL)
			return (NULL);
		idx--;
	}

	if (temporary->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node->n = n;
	new_node->prev = temporary;
	new_node->next = temporary->next;
	temporary->next->prev = new_node;
	temporary->next = new_node;
	
	return (new_node);
}
