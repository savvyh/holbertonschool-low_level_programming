#include "hash_tables.h"
#include <stdlib.h>
/**
  * hash_table_create - function that creates a hash table
  *
  * @size: Size of the array
  *
  * Return: A pointer to the newly created hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = malloc(size);
	unsigned long int index = 0;

	if (hash_table == NULL)
		return (NULL);

	while (index < size)
	{
		index++;
	}

	free(hash_table);
	return (hash_table);
}
