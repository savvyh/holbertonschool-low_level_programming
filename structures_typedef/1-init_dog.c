#include "dog.h"
/**
 * init_dog - initialisation of dog's identity
 * @d: pointeur to struct dog
 * @name: its name
 * @age: its age
 * @owner: its owner
 * Return: nothing
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;

}
