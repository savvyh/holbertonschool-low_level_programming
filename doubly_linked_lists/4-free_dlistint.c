#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - function to free the allocate memory of the list
 *
 * @head: the beginning of the list
 *
 * Return: nothing because it's a void function
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *free_node;

	while (head != NULL)
	{
		free_node = head;
		head = head->next;
		free(free_node);
	}
}
