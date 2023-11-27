#include "lists.h"
#include <stdio.h>

/**
 * print_list - function to print all the element of a list
 *
 * @h: head of list_t
 *
 * Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t number_node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

	h = h->next;
	number_node++;
	}

	return (number_node);
}
