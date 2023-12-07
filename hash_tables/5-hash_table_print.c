#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - function that print a hash table
 *
 * @ht: the hash table
 *
 * Return: Nothing
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	char print_comma = 0;
	hash_node_t *element = NULL;

	if (ht == NULL)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		element = ht->array[index];
		while (element != NULL)
		{
			if (print_comma == 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", element->key, element->value);
			print_comma = 1;

			element = element->next;
		}
	}
	printf("}\n");
}
