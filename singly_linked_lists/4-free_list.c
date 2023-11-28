#include "lists.h"
#include <stdlib.h>
/**
 * free_list - function to free the allocate memory of the list
 *
 * @head: the beginning of the list
 *
 * Return: nothing because it's a void function
*/
void free_list(list_t *head)
{
	list_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node->str);
		free(node);
	}
}
