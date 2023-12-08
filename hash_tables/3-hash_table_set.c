#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * hash_table_set - function that adds an element to the hash table
 *
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key, which can't be an empty string
 * @value: the value associated with the key, must be duplicate,
 *			can be an empty string.
 *
 * Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new_element = NULL, *current_node = NULL;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	current_node = ht->array[index];
	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);
			current_node->value = strdup(value);

			if (current_node->value == NULL)
				return (0);
			return (1);
		}
		current_node = current_node->next;
	}
	index = key_index((const unsigned char *)key, ht->size);
	new_element = malloc(sizeof(hash_node_t));
	if (new_element == NULL)
		return (0);
	new_element->key = strdup(key);
	if (new_element->key == NULL)
	{
		free(new_element);
		return (0);
	}
	new_element->value = strdup(value);
	if (new_element->value == NULL)
	{
		free(new_element->key);
		free(new_element);
		return (0);
	}
	new_element->next = ht->array[index];
	ht->array[index] = new_element;
	return (1);
}
