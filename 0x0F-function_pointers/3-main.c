#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs simple operations
 *
 * @argc : number of arg
 * @argv : arguments passed
 *
 * Return: 0 if correct, 98, 99 or 100 if Error
 */

int main(int argc, char *argv[])
{
	int (*fct)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	fct = get_op_func(argv[2]);
	if (fct == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", fct(atoi(argv[1]), atoi(argv[3])));
	return (0);

}
