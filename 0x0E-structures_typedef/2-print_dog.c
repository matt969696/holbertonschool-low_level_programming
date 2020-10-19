#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 *
 * @d: name of the variable
 *
 * Return: Void.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name == NULL ? "(nil)" : d->name));
		if (d->age == 0)
			printf("Age: (nil)\n");
		else
			printf("Age: %f\n", d->age);
		printf("Owner: %s\n", (d->owner == NULL ? "(nil)" : d->owner));
	}
}
