#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 *
 * @argc : standard argc
 * @argv : standard argv
 *
 * Return: 0 if ok, 1 if error
 */

int main(int argc, char *argv[])
{
	int nb = 0;
	int i = 0;
	int sum;
	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	sum = atoi(argv[1]);

	if (sum < 0)
	{
		printf("0\n");
		return (0);
	}

	while (sum != 0)
	{
		nb += sum / coin[i];
		sum = sum % coin[i];
		i++;
	}
	printf("%d\n", nb);
	return (0);
}
