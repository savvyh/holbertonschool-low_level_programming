#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - function that add a new node of the list
 *
 * @head: the beginning of the list
 * @str: string to be duplicated
 *
 * Return: the address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(str);
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}

/**
 * _strlen - the lenght of a string
 * @s: the string
 * Return: lenght of a string
 */
int _strlen(const char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
