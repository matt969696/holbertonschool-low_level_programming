#include "holberton.h"
#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a char
 *
 * @s : pointer to be set
 * @to : char to be pointed to
 *
 * Return: Void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
