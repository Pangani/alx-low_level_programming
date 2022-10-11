#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees the memory alloacted dynamically to d struct
 * @d: an input struct
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);
}
