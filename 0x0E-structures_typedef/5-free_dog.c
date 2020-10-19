#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs
 *
 * @d: dog to be freed
 *
 * Return: Void.
 */

void free_dog(dog_t *d)
{
	free(d);
}
