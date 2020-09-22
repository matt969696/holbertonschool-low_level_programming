#include <stdio.h>

/**
 * main - Return the sum of 3 and 5 multiples below 1024
 *
 * Return: 0
 **/

int main(void)
{
	int i;
	int sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%i\n", sum);
	return (0);
}
