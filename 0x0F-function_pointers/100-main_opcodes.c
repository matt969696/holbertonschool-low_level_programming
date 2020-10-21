#include <stdio.h>
#include <stdlib.h>



/**
 * main - prints the opcodes
 *
 * @argc : number of arg
 * @argv : arguments passed
 *
 * Return: 0 if correct, 1 or 2 if Error
 */

int main(int argc, char *argv[])
{

	unsigned char *pf;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}


	if (atoi(argv[1]) <= 0)
	{
		printf("Error\n");
		return (2);
	}

	pf = (unsigned char *)main;

	for (i = 0; i < atoi(argv[1]) - 1 && pf[i] != 195; i++)
		printf("%02x ", pf[i]);
	printf("%02x\n", pf[i]);
	return (0);

}
