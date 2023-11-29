#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index - function that return the nth node of a list
 *
 * @head: the head node of the list
 * @index: the index of the node, starting from 0
 *
 * Return: the nth node of a list.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node = 0;

	while (head != NULL && node < index)
	{
		head = head->next;
		node++;
	}

	return (head);
}
