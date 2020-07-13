#include "dog.h"
#include "stdio.h"
/**
 * print_dog -  prints a struct dog
 * @d: puntero a la estructrua dog
 */
void print_dog(struct dog *d)
{
	if (d == '\0')
		return;
	if ((*d).name == '\0')
		printf("Name: (nil)");
	else
		printf("Name: %s\n", (*d).name);
	printf("Age: %f\n", d->age);
	if (d->owner == '\0')
		printf("Age: (nil)");
	else
		printf("Owner: %s\n", d->owner);
}
