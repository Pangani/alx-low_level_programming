#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialise the variables
 * @d: the structure
 * @name: name
 * @age: age
 * @owner: owner
 * Return: return a structure
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->owner = owner;
	d->age = age;
}

