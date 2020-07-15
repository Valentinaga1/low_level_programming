#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees dogs
 * @d: puntero a dog
 * Return: no return
 */
void free_dog(dog_t *d)
{
		free(d->name);
		free(d->owner);
		free(d);
}
