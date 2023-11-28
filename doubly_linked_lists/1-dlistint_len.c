#include "lists.h"
/**
 * dlistint_len - function to list the number of elements of the list
 *
 * @h: head of list_t
 *
 * Return: number of element of the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t number_element = 0;

	while (h != NULL)
	{
		h = h->next;
		number_element++;
	}

	return (number_element);
}
