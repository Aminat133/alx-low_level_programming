#include <stdlib.h>
#include "dog.h"
/**
 *init_dog - a function that initialize a variable of type struct dog
 * @d: stucture
 * @name: name
 * @age: age
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
		return;
	}
}
