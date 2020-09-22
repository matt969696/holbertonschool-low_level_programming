#include <stdio.h>
#include <stdint.h>

/**
 * main - prints the first 50 Fibonacci numbers,
 *
 * Return: 0
 **/

int main(void)
{
	int i;
	double n, n1, n2;

	n1 = 2;
	n2 = 1;

	printf("1, 2");
	for (i = 3; i <= 50; i++)
	{
		n = n1 + n2;
		n2 = n1;
		n1 = n;
		printf(", %.0f", n);
	}
	printf("\n");
	return (0);
}
