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
	int nb = 48;

	while (nb <= 57)
	{
		putchar(nb);
		nb++;
	}
	putchar('\n');

	return (0);
}
