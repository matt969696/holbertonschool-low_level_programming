#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * checkint -  check if a string is a number
 *
 * @str : string to check
 *
 * Return: 0 if number else 1
 */

int checkint(char *str)
{
	int i = 0;

	if (*str == '-')
		i = 1;
	while (*(str + i))
	{
		if (*(str + i) < '0' || *(str + i) > '9')
			return (1);
		i++;
	}
	return (0);
}






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
		if (checkint(argv[i]) == 1)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
