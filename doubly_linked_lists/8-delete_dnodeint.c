#include "lists.h"
/**
 * delete_dnodeint_at_index - function that delete the node
 *
 * @head: the head of the list
 * @index: index of the node that should be deleted and start at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temporary = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;

		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		return (1);
	}

	while (index != 0)
	{
		if (temporary == NULL)
		{
			return (-1);
		}
		temporary = temporary->next;
		index--;
	}

	if (temporary->next == NULL)
	{
		temporary->prev->next = NULL;
		return (1);
	}

	temporary->prev->next = temporary->next;
	temporary->next->prev = temporary->prev;

	return (1);
}
