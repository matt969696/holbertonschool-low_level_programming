#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 *
 * @name: name of the new dog
 * @age : age of the new dog
 * @owner : owner of the new dog
 *
 * Return: new dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	if (name == NULL || owner == NULL)
		return (NULL);

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);
	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;
	return (newdog);
}
