#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - function to print all element of a list
 *
 * @h: the head node of dlistint_t
 *
 * Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t number_node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		number_node++;
	}

	return (number_node);
}
