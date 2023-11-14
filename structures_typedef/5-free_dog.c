#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function to free the allocation memory
 * @d: the dog informations
 * Return: Nothing
*/

void free_dog(dog_t *d)
{
	if (!d)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
