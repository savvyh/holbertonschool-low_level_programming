#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - function that add a new node at the end of the list
 *
 * @head: the beginning of the list
 * @n: an integer
 *
 * Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temporary = *head;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = *head;
		*head = new_node;
		return (new_node);
	}

	while (temporary->next != NULL)
	{
		temporary = temporary->next;
	}

	temporary->next = new_node;
	new_node->prev = temporary;

	return (new_node);
}
