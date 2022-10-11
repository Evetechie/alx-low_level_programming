#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Initializes a variable of type struct dog
 * @d: The dog to be initialized
 * @name: The name of the dog
 * @age: age of the dog
 * @owner: The owner of the dog
 *
 * Return: a variable of type struct dog
 */
void init_dog(struct dog *d, char *name, float *age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
