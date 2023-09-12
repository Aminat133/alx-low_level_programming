#include <stdio.h>
#include "dog.h"

/**
 * new_dog - a function that creates a new dog.
 * @name: name
 * @age: age
 * @owner: owner
 */

 dog_t *new_dog(char *name, float age, char *owner)
 {
	dog_t *p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (0);
		
 }