#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Display the 0 to 9 digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int nb = 0;

	while (nb <= 9)
	{
		printf("%d", nb);
		nb++;
	}
	printf("\n");

	return (0);
}
