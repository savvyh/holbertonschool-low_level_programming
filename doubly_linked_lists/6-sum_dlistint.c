#include "lists.h"
/**
 * sum_dlistint - sum alla data (n) of a list
 *
 * @head: the head of a list
 *
 * Return: the result of this sum
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
