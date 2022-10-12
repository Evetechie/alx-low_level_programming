#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a variable of type of struct dog
 * @d: The dog to be initialized
 * @name: The name of the dog
 * @age: THe age of the dog
 * @owner: THe owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
