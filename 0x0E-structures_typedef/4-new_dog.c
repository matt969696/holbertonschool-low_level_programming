#include <stdio.h>
#include <stdlib.h>
#include "dog.h"


/**
 * _strlen - returns the length of a string
 *
 * @s : string
 *
 * Return: len of the String
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;

	return (i);
}







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
	int lname, lowner, i;
	char *newname, *newowner;

	if (name == NULL || owner == NULL)
		return (NULL);

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	lname = _strlen(name);
	newname = malloc((lname + 1) * sizeof(char));
	if (newname == NULL)
	{
		free(newdog);
		return (NULL);
	}

	for (i = 0; i < lname; i++)
		newname[i] = name[i];
	newname[i] = '\0';
	newdog->name = newname;
	newdog->age = age;

	lowner = _strlen(owner);
	newowner = malloc((lowner + 1) * sizeof(char));
	if (newowner == NULL)
	{
		free(newname);
		free(newdog);
		return (NULL);
	}
	for (i = 0; i < lowner; i++)
		newowner[i] = owner[i];
	newowner[i] = '\0';
	newdog->owner = newowner;
	return (newdog);
}
