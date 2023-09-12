#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlength - Finds the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlength(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	len++;

	return (len);
}

/**
 * _strcpy - Copies a string pointed to by src, including the
 *            terminating null byte, to a buffer pointed to by dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 *
 * Return: The pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - a function that creates a new dog.
 * @name: name
 * @age: age
 * @owner: owner
 */

 dog_t *new_dog(char *name, float age, char *owner)
 {

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog_t *p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);

	p->name = malloc(sizeof(char) * _strlength(name));
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}

	p->age = age;

	p->owner = malloc(sizeof(char) * _strlength(owner))
	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}

	p->name = _strcpy(p->name, name);
	p->owner = _strcpy(p->owner, owner);
 }
