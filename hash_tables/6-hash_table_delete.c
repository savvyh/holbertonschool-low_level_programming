#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_delete - function to delete a hash table
 *
 * @ht: the hash table
 *
 * Return: Nothing
 *
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;

	if (ht == NULL)
		return;

	for (index = 0; index < ht->size; index++)
	{
		hash_node_t *element = ht->array[index];

		while (element != NULL)
		{
			element = element->next;
			free(element->key);
			free(element->value);
			free(element);
		}
	}

	free(ht->array);
	free(ht);
}
