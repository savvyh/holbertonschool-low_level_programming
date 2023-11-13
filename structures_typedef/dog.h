#ifndef DOG_H
#define DOG_H

/**
 * struct dog - all about the dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */

#define struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
