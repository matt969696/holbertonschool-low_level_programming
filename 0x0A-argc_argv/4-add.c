#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -  adds positive numbers
 *
 * @argc : standard argc
 * @argv : standard argv
 *
 * Return: 0 if ok, 1 if error
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] != '0' && atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
